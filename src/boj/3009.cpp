#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unordered_map<int, int> xmp;
    unordered_map<int, int> ymp;

    for (int i = 0; i < 3; ++i) {
        int x;
        int y;
        cin >> x >> y;

        ++xmp[x];
        ++ymp[y];
    }

    for (const auto &[k, v] : xmp) {
        if (v == 1) cout << k << ' ';
    }
    for (const auto &[k, v] : ymp) {
        if (v == 1) cout << k << ' ';
    }
    cout << '\n';

    return 0;
}

