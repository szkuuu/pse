#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    int ret =
            (c - b <= 0) ? -1 :
            (a % (c - b)) == 0 ? (a / (c - b)) + 1 :
            ceil(a / (static_cast<double>(c - b)));

    cout << ret << '\n';

    return 0;
}

