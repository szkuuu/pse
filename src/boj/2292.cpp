#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 2;
    if (n == 1) {
        ret = 1;
    } else {
        int start = 0;
        int inc = 1;
        int end = start + inc;

        while (!(6 * start + 2 <= n && n <= 6 * end + 1)) {
            ++ret;
            ++inc;
            start = end;
            end = start + inc;
        }
    }

    cout << ret << '\n';

    return 0;
}

