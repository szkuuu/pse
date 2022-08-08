#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    int n;
    cin >> x;
    cin >> n;

    int cmp = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        int b;
        cin >> a >> b;

        cmp += (a * b);
    }

    cout << (cmp == x ? "Yes" : "No") << '\n';

    return 0;
}

//

