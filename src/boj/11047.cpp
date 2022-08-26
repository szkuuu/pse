#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_k;
vector<int> g_v;
int g_count = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_k;

    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        g_v.push_back(item);
    }

    while (g_k != 0) {
        for (auto iter = g_v.rbegin(); iter != g_v.rend(); ++iter) {
            if (g_k - *iter < 0) continue;

            int q = g_k / *iter;
            g_k -= (*iter * q);
            g_count += q;

            break;
        }
    }

    cout << g_count << '\n';

    return 0;
}

//

