#include <bits/stdc++.h>

using namespace std;

string g_str;
int g_t;
array<vector<int>, 26> g_arr;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> g_str;

    for (auto i = 0; i < g_str.length(); ++i) {
        g_arr[static_cast<int>(g_str[i] - 'a')].push_back(i);
    }

    cin >> g_t;

    for (int i = 0; i < g_t; ++i) {
        char find;
        int start;
        int end;

        cin >> find >> start >> end;

        int f_idx = find - 'a';

        const auto &f_idx_begin = g_arr[f_idx].begin();
        const auto &f_idx_end = g_arr[f_idx].end();

        cout << distance(
                lower_bound(f_idx_begin, f_idx_end, start),
                upper_bound(f_idx_begin, f_idx_end, end)
        ) << '\n';
    }

    return 0;
}

//

