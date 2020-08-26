#include "solution.h"
#include<iostream>
#include<vector>
using namespace std;

//997. 找到小镇的法官
int main() {
	Solution solution;
	vector<vector<int>> trust = {
		{1,2}
	};
	cout << solution.findJudge(2,trust)<< endl;
	system("pause");
	return 0;
}