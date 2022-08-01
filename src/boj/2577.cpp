#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int digit[10] = { 0, };
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    int mul = a * b * c;
    while (mul != 0) {
        ++digit[mul % 10];

        mul /= 10;
    }

    for (auto &item : digit) {
        cout << item << '\n';
    }

    return 0;
}

