#include "solution.h"
#include<iostream>
#include<vector>
using namespace std;

//1557. 可以到达所有点的最少点数目
int main() {
	Solution solution;
	vector<vector<int>> edges = {
		{0,1},{2,1},{3,1},{1,4},{2,4}
	};
	for (auto a:solution.findSmallestSetOfVertices(5, edges)) {
		cout <<a<<" "<<endl;
	}
	system("pause");
	return 0;
}