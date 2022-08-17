#include <bits/stdc++.h>

using namespace std;

int g_k;
vector<unsigned long long> g_v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_k;

    for (int i = 0; i < g_k; ++i) {
        unsigned long long item;
        cin >> item;

        if (item == 0) {
            g_v.pop_back();
            continue;
        }

        g_v.push_back(item);
    }

    cout << accumulate(g_v.begin(), g_v.end(), 0LL, plus<>()) << '\n';

    return 0;
}

//

