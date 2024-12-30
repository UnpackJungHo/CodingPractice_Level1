#include<iostream>
using namespace std;
int main() {
	int num[26];
	string str;
	for (int i = 0; i < 26; i++) {
		num[i] = -1;
	}
	cin >> str;

	for (int i = 0; i < (int)str.length(); i++) {
		int n = str.at(i) - 97;
		if (num[n] == -1) {   
			num[n] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << num[i] << ' ';
	}

}