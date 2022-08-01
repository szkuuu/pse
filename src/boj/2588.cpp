#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;

    cin >> a >> b;

    int mul = a * b;

    while (b != 0) {
        cout << a * (b % 10) << '\n';
        b /= 10;
    }
    cout << mul << '\n';

    return 0;
}

