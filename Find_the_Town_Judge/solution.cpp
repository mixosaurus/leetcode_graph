#include "solution.h"
#include<iostream>


int Solution::findJudge(int N, vector<vector<int>>& trust) {
    int* in_degree = new int[N + 1]{};
    int* out_degree = new int[N + 1]{};
    for (vector<int> v : trust) {
        in_degree[v[1]]++;
        out_degree[v[0]]++;
    }
    //ע��ֻ�з���һ�˵������NΪ1, trustΪ��
    //0λ��ʼ������Ч���ݣ���1λ�ÿ�ʼ��������
    for (int i = 1; i < N + 1; i++) {
        if (in_degree[i] == N - 1 && out_degree[i] == 0) {
            return i;
        }
    }
    return -1;
}