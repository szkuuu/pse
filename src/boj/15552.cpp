#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = n; i > 0; --i) {
        int a;
        int b;

        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}

