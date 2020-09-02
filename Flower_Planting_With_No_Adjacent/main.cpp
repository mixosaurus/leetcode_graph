#include "solution.h"
#include<iostream>
#include<vector>
#include<set>
using namespace std;

//1042. ²»ÁÚ½ÓÖ²»¨
int main() {
	Solution solution;
	vector<vector<int>> paths = {
		{1,2} ,{2,3},{3,4},{4,1},{1,3},{2,4 }
	};
	vector<int> a=solution.gardenNoAdj(4,paths);
	for (int as : a) {
		cout << as << " ";
	}
	system("pause");
	return 0;
}