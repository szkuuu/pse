#include <bits/stdc++.h>

using namespace std;

int g_burger[3];
int g_drink[2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (size_t i = 0; i < size(g_burger); ++i) cin >> g_burger[i];
    for (size_t i = 0; i < size(g_drink); ++i) cin >> g_drink[i];

    cout << *min_element(begin(g_burger), end(g_burger)) + *min_element(begin(g_drink), end(g_drink)) - 50 << '\n';

    return 0;
}

//

