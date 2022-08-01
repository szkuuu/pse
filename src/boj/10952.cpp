#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int a;
        int b;

        cin >> a >> b;

        if (a == 0 && b == 0) break;
        cout << a + b << '\n';
    }

    return 0;
}

