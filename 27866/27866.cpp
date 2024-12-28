#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int n;
	cin >> str;
	cin >> n;
	cout << str.at(n-1);
}