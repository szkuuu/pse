#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_max = INT_MIN;
int g_cache[1000];
int g_arr[1000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 0; i < g_n; ++i) cin >> g_arr[i];

    for (int i = 0; i < g_n; ++i) {
        g_cache[i] = 1;

        for (int j = 0; j < i; ++j) {
            if (g_arr[i] > g_arr[j]) g_cache[i] = max(g_cache[i], g_cache[j] + 1);
        }

        g_max = max(g_max, g_cache[i]);
    }

    cout << g_max << '\n';

    return 0;
}

// cannot solve

