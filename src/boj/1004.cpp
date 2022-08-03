#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int start_x;
        int start_y;
        int end_x;
        int end_y;
        cin >> start_x >> start_y >> end_x >> end_y;

        int n;
        cin >> n;

        int ret = 0;
        for (int j = 0; j < n; ++j) {
            int x;
            int y;
            int r;
            cin >> x >> y >> r;

            double sd = sqrt(pow(start_x - x, 2) + pow(start_y - y, 2));
            double ed = sqrt(pow(end_x - x, 2) + pow(end_y - y, 2));

            if (sd < r && ed < r) {
                continue;
            } else if (sd < r || ed < r) {
                ++ret;
                continue;
            } else {
                continue;
            }
        }
        cout << ret << '\n';
    }

    return 0;
}

