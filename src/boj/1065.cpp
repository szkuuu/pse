#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 0;
    for (int i = 1; i <= n; ++i) {
        if (i < 100) {
            ret++;
            continue;
        }

        if (i == 1000) continue;

        if (i % 111 == 0) {
            ret++;
            continue;
        }

        int temp = i;
        int m = temp % 10;
        temp /= 10;

        int n = temp % 10;
        temp /= 10;

        int o = temp % 10;
        temp /= 10;

        if (n - m == o - n) ret++;
    }

    cout << ret << '\n';

    return 0;
}

