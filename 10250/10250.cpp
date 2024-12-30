#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<int> hNum;
	vector<int> wNum;
	int T, H, W, N;
	string str;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int hM = (N % H == 0) ? H : N % H;
		int wM = (N % H == 0) ? N / H : (N / H) + 1;
		hNum.push_back(hM);
		wNum.push_back(wM);
	}
	for (int i = 0; i < (int)hNum.size(); i++) {
		string str = to_string(wNum[i]);
		if (wNum[i] < 10) {
			cout << hNum[i] << "0" << wNum[i] << '\n';
		}
		else
			cout << hNum[i] << wNum[i] << '\n';
	}
}