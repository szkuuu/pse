#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    while (n > 0) {
        string str;
        cin >> str;

        int acc = str[0] == 'O' ? 1 : 0;
        int ret = acc;

        for (int i = 1; i < str.length(); ++i) {
            acc = str[i - 1] == 'O' && str[i] == 'O' ? acc + 1 : str[i] == 'O' ? 1 : 0;
            ret += acc;
        }

        cout << ret << '\n';
        n--;
    }

    return 0;
}

