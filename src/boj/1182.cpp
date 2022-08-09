#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_target;
int g_count;
int g_limit = 1;
vector<int> g_v;
bool g_isvisited[20];

void track(int pos, int count, int acc) {
    if (count == g_limit) {
        if (g_target == acc) g_count++;

        return;
    }

    for (int i = pos; i < g_n; ++i) {
        if (g_isvisited[i]) continue;

        g_isvisited[i] = true;
        track(i + 1, count + 1, acc + g_v[i]);
        g_isvisited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_target;

    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        g_v.push_back(item);
    }

    while (g_limit <= g_n) {
        track(0, 0, 0);
        g_limit++;
    }

    cout << g_count << '\n';

    return 0;
}

// 19 min, 39

