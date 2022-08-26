#include <bits/stdc++.h>

using namespace std;

int g_n;
vector<unsigned long> g_node;
vector<unsigned long> g_branch;

unsigned long long g_ret = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 0; i < g_n - 1; ++i) {
        int item;
        cin >> item;

        g_branch.push_back(item);
    }

    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        g_node.push_back(item);
    }

    unsigned long value = INT_MAX;
    for (auto i = 0; i < g_node.size() - 1; ++i) {
        g_ret += min(value, g_node[i]) * g_branch[i];
        value = min(value, g_node[i]);
    }

    cout << g_ret << '\n';

    return 0;
}

//

