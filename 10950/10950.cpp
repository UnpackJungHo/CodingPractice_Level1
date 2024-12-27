#include<iostream>
using namespace std;

int main() {
	int num, num1, num2;
	cin >> num;
	int* numList = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> num1 >> num2;
		numList[i] = num1 + num2;
	}

	for (int i = 0; i < num; i++) {
		cout << numList[i] << '\n';
	}
}