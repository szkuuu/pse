#include <bits/stdc++.h>

using namespace std;

int g_arr[21];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(begin(g_arr), end(g_arr), 0);

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        string cmd;
        cin >> cmd;

        if (cmd == "add") {
            int x;
            cin >> x;

            if (g_arr[x] == 0) g_arr[x]++;
        } else if (cmd == "remove") {
            int x;
            cin >> x;

            if (g_arr[x] == 1) g_arr[x]--;
        } else if (cmd == "check") {
            int x;
            cin >> x;

            cout << g_arr[x] << '\n';
        } else if (cmd == "toggle") {
            int x;
            cin >> x;

            g_arr[x] = (g_arr[x] == 0) ? 1 : 0;
        } else if (cmd == "all") {
            for (int k = 1; k <= 20; ++k) g_arr[k] = 1;
        } else {
            for (int k = 1; k <= 20; ++k) g_arr[k] = 0;
        }
    }

    return 0;
}

//

