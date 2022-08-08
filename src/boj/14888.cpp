#include <bits/stdc++.h>

using namespace std;

int g_n;
vector<int> g_vi;
int g_op_count[4];

int g_max = INT_MIN;
int g_min = INT_MAX;

void track(int pos, int ret) {
    if (pos == g_n - 1) {
        g_max = max(g_max, ret);
        g_min = min(g_min, ret);

        return;
    }

    if (pos == 0) ret = g_vi[0];

    for (int i = 0; i < 4; ++i) {
        if (g_op_count[i] == 0) continue;
        switch (i) {
            case 0:
                g_op_count[i]--;
                track(pos + 1, ret + g_vi[pos + 1]);
                g_op_count[i]++;
                break;
            case 1:
                g_op_count[i]--;
                track(pos + 1, ret - g_vi[pos + 1]);
                g_op_count[i]++;
                break;
            case 2:
                g_op_count[i]--;
                track(pos + 1, ret * g_vi[pos + 1]);
                g_op_count[i]++;
                break;
            case 3:
                g_op_count[i]--;
                track(pos + 1, ret / g_vi[pos + 1]);
                g_op_count[i]++;
                break;
            default:
                break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        g_vi.push_back(item);
    }

    cin >> g_op_count[0] >> g_op_count[1] >> g_op_count[2] >> g_op_count[3];

    track(0, 0);

    cout << g_max << '\n' << g_min << '\n';

    return 0;
}

