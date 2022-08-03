#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x1;
        int y1;
        int r1;
        int x2;
        int y2;
        int r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double d = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));

        if (d == 0) {
            cout << (r1 == r2 ? -1 : 0) << '\n';
        } else if (d == abs(r1 - r2)) {
            cout << 1 << '\n';
        } else if (d < abs(r1 - r2)) {
            cout << 0 << '\n';
        } else if (d > r1 + r2) {
            cout << 0 << '\n';
        } else if (d == r1 + r2) {
            cout << 1 << '\n';
        } else if (d < r1 + r2) {
            cout << 2 << '\n';
        } else {
            // do nothing...
        }
    }

    return 0;
}

