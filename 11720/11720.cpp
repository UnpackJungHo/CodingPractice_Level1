#include<iostream>
using namespace std;

int main() {
	int num,result = 0;	
	cin >> num;
	char* c = new char[num];
	string numStr;
	for (int i = 0; i < num; i++) {
		c[i] = ' ';
	}

	cin >> numStr;
	for (int i = 0; i < num; i++) {
		c[i] = ((int)numStr.at(i) - 48);
		result += c[i];
	}
	cout << result;

}
