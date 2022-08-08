#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_m;
deque<int> buf;

void track() {
    if (size(buf) == g_m) {
        auto out_buf(buf);
        while (!out_buf.empty()) {
            cout << out_buf.front() << ' ';
            out_buf.pop_front();
        }
        cout << '\n';

        return;
    }

    for (int i = 0; i < g_n; ++i) {
        buf.push_back(i + 1);
        track();
        buf.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_m;

    track();

    return 0;
}

// 9 min. 41

