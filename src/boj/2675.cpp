#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t > 0) {
        int n;
        string str;

        cin >> n >> str;

        for (const auto &ch : str) {
            for (int i = n; i > 0; --i) cout << ch;
        }
        cout << '\n';
        t--;
    }

    return 0;
}

