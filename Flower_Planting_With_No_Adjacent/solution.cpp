#include "solution.h"
#include<iostream>
#include<set>

vector<int> Solution::gardenNoAdj(int N, vector<vector<int>>& paths) {
    vector<int>answer(N);
    vector<vector<int>> G(N);
    //构建邻接表
    for (auto& edge : paths) {
        G[edge[0] - 1].push_back(edge[1] - 1);
        G[edge[1] - 1].push_back(edge[0] - 1);
    }
    for (int i = 0; i < N; i++) {
        set<int> color = { 1, 2, 3, 4 };
        for (int adj : G[i]) {
            color.erase(answer[adj]);
        }
        //去掉已经染色的顶点
        answer[i] = *color.begin();
    }
    return answer;
}
