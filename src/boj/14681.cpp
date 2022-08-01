#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    int y;
    int ret;

    cin >> x;
    cin >> y;

    ret =
            (x > 0 && y > 0) ? 1 :
            (x < 0 && y > 0) ? 2 :
            (x < 0 && y < 0) ? 3 :
            (x > 0 && y < 0) ? 4 : -1;

    cout << ret << '\n';

    return 0;
}

