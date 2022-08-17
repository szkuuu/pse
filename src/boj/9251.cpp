#include <bits/stdc++.h>

using namespace std;

int g_cache[1001][1001];
string g_s1;
string g_s2;

int g_max = INT_MIN;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_s1;
    cin >> g_s2;

    for (int i = 1; i <= g_s1.length(); ++i) {
        for (int j = 1; j <= g_s2.length(); ++j) {
            if (g_s1[i - 1] == g_s2[j - 1]) {
                g_cache[i][j] = g_cache[i - 1][j - 1] + 1;
            } else {
                g_cache[i][j] = max(g_cache[i - 1][j], g_cache[i][j - 1]);
            }
        }
    }

    cout << g_cache[g_s1.length()][g_s2.length()] << '\n';

    return 0;
}

// cannot solve

