#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(8);
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    bool isAscending = true, isDescending = true;

    for (int i = 0; i < 7; i++) {
        if (v[i] < v[i + 1]) {
            isDescending = false; 
        }
        else if (v[i] > v[i + 1]) {
            isAscending = false; 
        }
    }

    if (isAscending)
        cout << "ascending";
    else if (isDescending)
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}
