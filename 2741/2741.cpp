#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        cout << i << '\n';
    }

    return 0;
}

/*즉, endl은 필요할 때만 사용하고, 반복적인 출력 작업에서는 반드시 \n을 사용하는 것이 성능 면에서 효율적입니다.*/