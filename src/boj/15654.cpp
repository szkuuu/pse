#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_limit;
vector<int> g_v;
deque<int> g_dq;
bool g_isvisited[8];

void track(int pos) {
    if (g_limit == size(g_dq)) {
        auto out_dq(g_dq);

        while (!out_dq.empty()) {
            cout << out_dq.front() << ' ';
            out_dq.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int i = 0; i < g_n; ++i) {
        if (g_isvisited[i]) continue;

        g_isvisited[i] = true;
        g_dq.push_back(g_v[i]);
        track(pos + 1);
        g_dq.pop_back();
        g_isvisited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_limit;

    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        g_v.push_back(item);
    }

    sort(g_v.begin(), g_v.end());

    track(0);

    return 0;
}

// 6 min. 13

