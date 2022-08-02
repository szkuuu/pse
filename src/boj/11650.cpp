#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector <pair<int, int>> v = {};

    for (int i = n; i > 0; --i) {
        int x;
        int y;

        cin >> x >> y;

        v.emplace_back(x, y);
    }

    sort(v.begin(), v.end(), [](const pair<int, int> &o0, const pair<int, int> &o1) {
        return o0.first == o1.first ? o0.second < o1.second : o0.first < o1.first;
    });

    for (const auto &item : v) {
        cout << item.first << ' ' << item.second << '\n';
    }

    return 0;
}

