#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 1;
    while (n > 0) {
        ret *= n;
        n--;
    }

    cout << ret << '\n';

    return 0;
}

