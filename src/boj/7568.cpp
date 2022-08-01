#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector< vector<int> > v = {};
    for (int i = 0; i < n; ++i) {
        int x;
        int y;

        cin >> x;
        cin >> y;

        v.push_back({ x, y });
    }

    for (int origin = 0; origin < n; ++origin) {
        int rank_ret = 1;

        for (int cmp = 0; cmp < n; ++cmp) {
            if (origin == cmp) continue;

            if (v[origin][0] < v[cmp][0] && v[origin][1] < v[cmp][1]) rank_ret++;
        }

        cout << rank_ret << ' ';
    }

    cout << '\n';

    return 0;
}

