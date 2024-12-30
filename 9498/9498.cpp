#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	if (90 <= num && num <= 100)
		cout << "A";
	else if (num >= 80 && num < 90)
		cout << "B";
	else if (num >= 70 && num < 80)
		cout << "C";
	else if (num >= 60 && num < 70)
		cout << "D";
	else
		cout << "F";
}