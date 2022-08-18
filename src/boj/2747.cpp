#include <bits/stdc++.h>

using namespace std;

int g_cache[46] = {0, 1,};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 2; i < 46; ++i) {
        g_cache[i] = g_cache[i - 1] + g_cache[i - 2];
    }

    int n;
    cin >> n;

    cout << g_cache[n] << '\n';

    return 0;
}

//

