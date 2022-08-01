#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h;
    int w;

    cin >> h >> w;

    vector<string> chess;

    for (int i = 0; i < h; ++i) {
        string row;
        cin >> row;

        chess.push_back(row);
    }

    char start = '\0';
    char cmp = '\0';
    int ret = 64;

    for (int xs = 0, xe = 8; xe <= w; ++xs, ++xe) {
        for (int ys = 0, ye = 8; ye <= h; ++ys, ++ye) {
            for (int t = 0; t < 2; ++t) {
                int count = 0;
                start = t % 2 == 0 ? 'B' : 'W';

                for (int y = ys; y < ye; ++y) {
                    for (int x = xs; x < xe; ++x) {
                        if (x == xs) {
                            start = y == ys ? start : start == 'B' ? 'W': 'B';
                            cmp = start;
                        }

                        if (cmp != chess[y][x]) count++;
                        cmp = cmp == 'B' ? 'W' : 'B';
                    }
                }

                ret = ret > count ? count : ret;
            }

            if (ret == 0) break;
        }
    }

    cout << ret << '\n';

    return 0;
}

