#include <bits/stdc++.h>

using namespace std;

int g_limit;
int g_n;
vector<char> g_v;
deque<char> g_deq;
bool g_isvisited[15];

bool ispromise(char ch) {
    if (ch == 'a') return true;
    if (ch == 'e') return true;
    if (ch == 'i') return true;
    if (ch == 'o') return true;
    if (ch == 'u') return true;

    return false;
}

void track(int pos, int nvw_count, int vw_count) {
    if (g_limit == size(g_deq)) {
        if (vw_count < 1) return;
        if (nvw_count < 2) return;

        auto out_deq(g_deq);

        while (!out_deq.empty()) {
            cout << out_deq.front();
            out_deq.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int i = pos; i < g_n; ++i) {
        if (g_isvisited[i]) continue;

        g_isvisited[i] = true;
        g_deq.push_back(g_v[i]);

        if (ispromise(g_v[i])) {
            track(i + 1, nvw_count, vw_count + 1);
        } else {
            track(i + 1, nvw_count + 1, vw_count);
        }

        g_deq.pop_back();
        g_isvisited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_limit >> g_n;

    for (int i = 0; i < g_n; ++i) {
        char ch;
        cin >> ch;

        g_v.push_back(ch);
    }

    sort(g_v.begin(), g_v.end());

    track(0, 0, 0);

    return 0;
}

// 15 min. 9

