#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 0;
    int temp = n;

    do {
        int acc = 10 * (temp % 10);
        acc += ((temp / 10 + temp % 10) % 10);

        ++ret;
        temp = acc;
    } while (temp != n);

    cout << ret << '\n';

    return 0;
}

