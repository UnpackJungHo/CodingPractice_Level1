#include<iostream>
using namespace std;

int main() {
	int size = 100, num = 0, num1, num2;
	int* numList = new int[size];

	while (true) {
		cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0)
			break;
		numList[num] = num1 + num2;
		num++;

	}
}