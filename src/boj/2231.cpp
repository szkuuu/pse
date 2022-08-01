#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int start = n - 54 < 0 ? 0 : n - 54;
    int ret = 0;

    for (int i = start; i < n; ++i) {
        int temp = i;
        int acc = i;

        while (temp != 0) {
            acc += temp % 10;
            temp /= 10;
        }

        if (acc == n) {
            ret = i;
            break;
        }
    }

    cout << ret << '\n';

    return 0;
}

