#include <iostream>
using namespace std;

// Ham kiem tra so hoan hao
bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    cout << "Cac so hoan hao tu 2 den " << n << " la:\n";
    for (int i = 2; i <= n; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

