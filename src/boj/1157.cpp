#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int alphas[26] = { 0, };
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), [](auto &ch) {
        return tolower(ch);
    });

    int max = 0;

    for (const auto &ch : str) {
        int t_idx = (ch - 'a') % 26;
        ++alphas[t_idx];
        max = ::max(alphas[t_idx], max);
    }

    int max_count = 0;
    char ret = '\0';
    for (int i = 0; i < 26; ++i) {
        if (alphas[i] == max) {
            max_count++;
            ret = i + 'A';
        }
    }

    cout << (max_count > 1 ? '?' : ret) << '\n';

    return 0;
}

