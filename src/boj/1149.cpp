#include <bits/stdc++.h>

using namespace std;

int g_limit;
int g_cache[1001][3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_limit;

    for (int i = 1; i <= g_limit; ++i) {
        int r;
        int g;
        int b;
        cin >> r >> g >> b;

        g_cache[i][0] = min(g_cache[i - 1][1], g_cache[i - 1][2]) + r;
        g_cache[i][1] = min(g_cache[i - 1][0], g_cache[i - 1][2]) + g;
        g_cache[i][2] = min(g_cache[i - 1][0], g_cache[i - 1][1]) + b;
    }

    cout << *min_element(begin(g_cache[g_limit]), end(g_cache[g_limit])) << '\n';

    return 0;
}

// t.o.

