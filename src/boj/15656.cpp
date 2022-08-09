#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_limit;
vector<int> g_v;
deque<int> g_d;

void track(int pos) {
    if (pos == g_limit) {
        auto out_d(g_d);

        while (!out_d.empty()) {
            cout << out_d.front() << ' ';
            out_d.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int i = 0; i < g_n; ++i) {
        g_d.push_back(g_v[i]);
        track(pos + 1);
        g_d.pop_back();
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

// 4 min. 14 

