#include <bits/stdc++.h>

using namespace std;

int g_table[13];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 5; ++i) {
        int idx;
        cin >> idx;

        g_table[idx - 1]++;
    }

    bool is_full_house = true;

    for (const int &i : g_table) {
        if (i == 0) continue;
        if (i == 2) continue;
        if (i == 3) continue;

        is_full_house = false;
        break;
    }

    cout << (is_full_house ? "Yes" : "No") << '\n';
    
    return 0;
}

//

