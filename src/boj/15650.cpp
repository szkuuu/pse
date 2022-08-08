#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_m;
deque<int> buf;

void track(int pos) {
    if (size(buf) == g_m) {
        auto out_buf(buf);

        while (!out_buf.empty()) {
            cout << out_buf.front() << ' ';
            out_buf.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int k = pos; k < g_n; ++k) {
        buf.push_back(k + 1);
        track(k + 1);
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

// 36 min.

