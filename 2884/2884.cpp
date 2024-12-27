#include<iostream>
using namespace std;

int main() {
	int hour, m;
	cin >> hour >> m;
	m -= 45;
	if (m < 0) {
		hour -= 1;
		m += 60;
		if (hour < 0) {
			hour += 24;
		}
	}
	cout << 1;
	cout << hour << " " << m;
}
////