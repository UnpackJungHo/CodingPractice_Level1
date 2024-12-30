#include<iostream>
#include<string>
using namespace std;
int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << (num1 + num2) - num3 << '\n';
	string s = to_string(num1) + to_string(num2);
	int n = stoi(s);
	cout << n-num3;
}
