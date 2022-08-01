#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int alphas[26];
    fill_n(alphas, 26, -1);

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        int idx = (str[i] - 'a') % 26;
        alphas[idx] = alphas[idx] == -1 ? i : min(alphas[idx], i);
    }

    for (const auto &item : alphas) {
        cout << item << ' ';
    }
    cout << '\n';

    return 0;
}

