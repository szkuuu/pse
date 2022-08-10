#include <bits/stdc++.h>

using namespace std;

int g_cache[1000001];

int recur(int n) {
    if (n <= 2) return g_cache[n];

    for (int i = 3; i <= n; ++i) {
        g_cache[i] = ((g_cache[i - 1] % 15746) + (g_cache[i - 2] % 15746)) % 15746;
    }

    return g_cache[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(begin(g_cache), end(g_cache), -1);
    g_cache[1] = 1;
    g_cache[2] = 2;

    int n;
    cin >> n;

    cout << recur(n) << '\n';

    return 0;
}

// 36 min. 11

