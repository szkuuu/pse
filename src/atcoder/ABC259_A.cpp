#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;

    while (n >= m) {
        t -= x <= n ? 0 : d;
        n--;
    }

    cout << t << '\n';

    return 0;
}

//

