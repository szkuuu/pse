#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_m;
int g_buf[9] = {0,};
bool g_issvisited[9] = {false,};

void track(int pos) {
    if (pos == g_m) {
        for (int i = 0; i < g_m; ++i) cout << g_buf[i] << ' ';
        cout << '\n';

        return;
    }

    for (int i = 1; i <= g_n; ++i) {
        if (!g_issvisited[i]) {
            g_issvisited[i] = true;
            g_buf[pos] = i;
            track(pos + 1);
            g_issvisited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_m;

    track(0);

    return 0;
}

//

