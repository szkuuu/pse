#include <bits/stdc++.h>

using namespace std;

int g_n;
vector<int> g_v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        g_v.push_back(item);
    }

    sort(g_v.begin(), g_v.end());

    for (int i = 1; i < g_n; ++i) g_v[i] += g_v[i - 1];

    cout << accumulate(g_v.begin(), g_v.end(), 0, plus<>()) << '\n';

    return 0;
}

//

