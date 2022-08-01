#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h;
    int m;
    int add;

    cin >> h >> m;
    cin >> add;

    m += add;
    h += (m / 60);
    m %= 60;
    h %= 24;

    cout << h << ' ' << m << '\n';

    return 0;
}

