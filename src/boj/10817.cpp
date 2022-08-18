#include <bits/stdc++.h>

using namespace std;

int g_arr[3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_arr[0] >> g_arr[1] >> g_arr[2];

    sort(begin(g_arr), end(g_arr));

    cout << g_arr[1] << '\n';

    return 0;
}

//

