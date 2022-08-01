#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h;
    int m;

    cin >> h >> m;

    m -= 45;
    h = m < 0 ? h - 1 < 0 ? 23 : h - 1 : h;
    m = m < 0 ? 60 + m : m;

    cout << h << ' ' << m << '\n';

    return 0;
}

