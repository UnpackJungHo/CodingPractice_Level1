#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	vector<int> newV;
	
	int num = 0, count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		v.push_back(num % 42);
	}

	for (int i = 0; i < v.size(); i++) {
		bool isEqual = false;

		for (int j = i+1; j < v.size(); j++) {
			if (v[i] == v[j]) {
				/*v.erase(v.begin() + j);
				j--;*/
				isEqual = true;
				break;
			}
		}

		if (!isEqual) {
			newV.push_back(v[i]);
		}
	}

	cout << newV.size();

}