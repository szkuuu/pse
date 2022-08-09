#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_min = INT_MAX;
int g_table[20][20];
bool g_isvisited[20];

void track(int pos, int count) {
    if (count == (g_n / 2)) {
        vector<int> vs;
        vector<int> vl;

        for (unsigned i = 0; i < g_n; ++i) {
            (g_isvisited[i]) ? vs.push_back(i) : vl.push_back(i);
        }
        int start_sum = 0;
        int link_sum = 0;

        for (unsigned i = 0; i < count; ++i) {
            for (unsigned j = 0; j < count; ++j) {
                start_sum += g_table[vs[i]][vs[j]];
                link_sum += g_table[vl[i]][vl[j]];
            }
        }

        g_min = min(g_min, abs(start_sum - link_sum));

        return;
    }

    for (int i = pos; i < g_n; ++i) {
        if (!g_isvisited[i]) {
            g_isvisited[i] = true;
            track(i, count + 1);
            g_isvisited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (unsigned i = 0; i < g_n; ++i) {
        for (unsigned j = 0; j < g_n; ++j) {
            cin >> g_table[i][j];
        }
    }

    track(0, 0);

    cout << g_min << '\n';

    return 0;
}

// cannot solve

