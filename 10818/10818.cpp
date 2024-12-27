#include<iostream>
using namespace std;

int main() {
	int num;

	cin >> num;

	int* numList = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> numList[i];
	}
	int max = numList[0], min = numList[0];

	for (int i = 0; i < num; i++) {
		if (max < numList[i]) {
			max = numList[i];
		}
	}

	for (int i = 0; i < num; i++) {
		if (min > numList[i]) {
			min = numList[i];
		}
	}

	cout << min << " " << max;

	delete[] numList;

}