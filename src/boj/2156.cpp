#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_cache[10001];
vector<int> g_v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 1; i <= g_n; ++i) {
        int item;
        cin >> item;

        g_v.push_back(item);

        if (i == 1) {
            g_cache[1] = item;
        } else if (i == 2) {
            g_cache[2] = g_v[0] + item;
        } else {
            g_cache[i] = g_cache[i - 1];
            g_cache[i] = max(g_cache[i], g_cache[i - 2] + item);
            g_cache[i] = max(g_cache[i], g_cache[i - 3] + g_v[i - 2] + item);
        }
    }

    cout << g_cache[g_n] << '\n';

    return 0;
}

// cannot solve

