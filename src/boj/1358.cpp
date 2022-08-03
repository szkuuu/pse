#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int w;
    int h;
    int x;
    int y;
    int p;
    cin >> w >> h >> x >> y >> p;

    int r = h / 2;

    int ret = 0;
    for (int i = 0; i < p; ++i) {
        int px;
        int py;
        cin >> px >> py;

        if (x <= px && px <= x + w && y <= py && py <= y + h) {
            ++ret;
            continue;
        }

        double ld = sqrt(pow(px - x, 2) + pow(py - (y + r), 2));
        double rd = sqrt(pow(px - (x + w), 2) + pow(py - (y + r), 2));

        if (ld <= r || rd <= r) {
            ++ret;
            continue;
        }
    }

    cout << ret << '\n';

    return 0;
}

