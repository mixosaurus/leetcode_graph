#include "solution.h"
#include<iostream>
#include<set>

//�������Ϊ��Ķ��㼴Ϊ����
vector<int> Solution::findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    int* in_degree = new int[n]{};
    vector<int> answers;
    for (vector<int> edge : edges) {
        in_degree[edge[1]]++;
    }
    for (int i = 0; i < n;i++) {
        if (in_degree[i] == 0) {
            answers.push_back(i);
        }
    }
    return answers;
}
