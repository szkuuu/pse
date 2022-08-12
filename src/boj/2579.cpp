#include <bits/stdc++.h>

using namespace std;

int g_limit;
int g_stair[300];
int g_cache[300];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_limit;

    for (int i = 0; i < g_limit; ++i) {
        cin >> g_stair[i];

        if (i == 0) {
            g_cache[0] = g_stair[0];
        } else if (i == 1) {
            g_cache[1] = g_stair[0] + g_stair[1];
        } else if (i == 2) {
            g_cache[2] = max(g_stair[0] + g_stair[2], g_stair[1] + g_stair[2]);
        } else {
            g_cache[i] = max(g_cache[i - 3] + g_stair[i - 1] + g_stair[i], g_cache[i - 2] + g_stair[i]);
        }
    }

    cout << g_cache[g_limit - 1] << '\n';

    return 0;
}

// cannot solve

