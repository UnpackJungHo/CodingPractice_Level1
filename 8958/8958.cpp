#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int num, point = 0;
	cin >> num;
	vector<string> s;
	vector<int> scores;
	string str;

	for (int i = 0; i < num; i++) {
		cin >> str;
		s.push_back(str);
		scores.push_back(0);
	}

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s[i].size(); j++) {
			if (s[i].at(j) != 'X') {
				scores[i] += ++point;
			}
			else {
				point = 0;
			}
		}
		point = 0;
		cout << scores[i] << " ";
	}


}