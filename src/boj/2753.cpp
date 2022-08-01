#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int y;
    int ret;

    cin >> y;

    ret = y % 4 == 0 && (y % 100 != 0 || y % 400 == 0) ? 1 : 0;

    cout << ret << '\n';
    
    return 0;
}

