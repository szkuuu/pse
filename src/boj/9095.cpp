#include <bits/stdc++.h>

using namespace std;

int g_cache[11];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    g_cache[1] = 1;
    g_cache[2] = 2;
    g_cache[3] = 4;

    for (int i = 4; i < 11; ++i) {
        g_cache[i] = g_cache[i - 1] + g_cache[i - 2] + g_cache[i - 3];
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        cout << g_cache[n] << '\n';
    }

    return 0;
}

//

