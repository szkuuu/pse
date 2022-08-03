#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    int y;
    int w;
    int h;
    cin >> x;
    cin >> y;
    cin >> w;
    cin >> h;

    int x_min = x - 0 <= w - x ? x - 0 : w - x;
    int y_min = y - 0 <= h - y ? y - 0 : h - y;
    int all_min = min(x_min, y_min);

    cout << all_min << '\n';

    return 0;
}

