cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n (so hang dau tien): ";
    cin >> n;

    double pi4 = 0;
    for (int i = 0; i <= n; i++) {
        pi4 += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    double pi = pi4 * 4;
    cout << "Gia tri gan dung cua pi = " << pi << endl;

    return 0;
}