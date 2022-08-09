#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_limit;
bool g_isvisited[8];
vector<int> g_v;
deque<int> g_deq;

void track(int pos) {
    if (g_limit == size(g_deq)) {
        auto out_deq(g_deq);

        while(!out_deq.empty()) {
            cout << out_deq.front() << ' ';
            out_deq.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int i = pos; i < g_n; ++i) {
        if (g_isvisited[i]) continue;

        g_isvisited[i] = true;
        g_deq.push_back(g_v[i]);
        track(i + 1);
        g_deq.pop_back();
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

// 5 min. 53

