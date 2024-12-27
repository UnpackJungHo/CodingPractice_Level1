#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<string> s;
	int repeatNum, totalNum;
	string repeatStr, result;

	cin >> totalNum;

	for (int i = 0; i < totalNum; i++) {
		cin >> repeatNum >> repeatStr;
		for (int j = 0; j < repeatStr.size(); j++) {
			for (int z = 0; z < repeatNum; z++) {
				result += repeatStr.at(j);
			}
		}
		s.push_back(result);
		result = "";
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}
}