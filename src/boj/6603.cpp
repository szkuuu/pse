#include <bits/stdc++.h>

using namespace std;

int g_limit = 6;
vector<int> g_v;
deque<int> g_deq;
bool g_isvisited[13];

void track(int pos, int count) {
    if (count == g_limit) {
        auto out_deq(g_deq);

        while (!out_deq.empty()) {
            cout << out_deq.front() << ' ';
            out_deq.pop_front();
        }
        cout << '\n';

        return;
    }

    for (size_t i = pos; i < size(g_v); ++i) {
        if (g_isvisited[i]) continue;

        g_isvisited[i] = true;
        g_deq.push_back(g_v[i]);
        track(i + 1, count + 1);
        g_deq.pop_back();
        g_isvisited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (;;) {
        int n;
        cin >> n;

        if (n == 0) break;

        g_v.clear();

        for (int i = 0; i < n; ++i) {
            int item;
            cin >> item;
            g_v.push_back(item);
        }

        track(0, 0);

        cout << '\n';
    }
    return 0;
}

// 18 min.

