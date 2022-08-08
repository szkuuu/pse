#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_m;
deque<int> buf;

void track(int r) {
    if (size(buf) == g_m) {
        auto out_buf(buf);

        while (!out_buf.empty()) {
            cout << out_buf.front() << ' ';
            out_buf.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int i = r; i < g_n; ++i) {
        buf.push_back(i + 1);
        track(i);
        buf.pop_back();
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

// 4 min. 37

