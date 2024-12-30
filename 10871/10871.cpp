#include<iostream>
#include<vector>
using namespace std;
int main() {
	int num, N, X;
	vector<int> v;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < N; i++) {
		if (v[i] < X) {
			cout << v[i] << " ";
		}
	}
}