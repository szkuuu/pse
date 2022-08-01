#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;
    int c;
    int ret = 0;

    cin >> a >> b >> c;

    if (a == b && b == c) {
        ret = 10000 + (a * 1000);
    } else if (a == b && b != c) {
        ret = 1000 + (a * 100);
    } else if (a != b && b == c) {
        ret = 1000 + (b * 100);
    } else if (a == c && b != c) {
        ret = 1000 + (a * 100);
    } else {
        ret = max(max(a, b), c) * 100;
    }

    cout << ret << '\n';

    return 0;
}

