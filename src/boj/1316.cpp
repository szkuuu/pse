#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 0;
    for (int i = n; i > 0; --i) {
        char prev = NULL;
        int alphas[26] = { 0, };

        string str;
        cin >> str;

        bool isOk = true;
        for (const auto &ch : str) {
            if (prev != ch) {
                if (alphas[(ch - 'a') % 26] == 0) {
                    prev = ch;
                    ++alphas[(ch - 'a') % 26];
                    continue;
                } else {
                    isOk = false;
                    break;
                }
            }
        }

        if (isOk) ++ret;
    }

    cout << ret << '\n';

    return 0;
}

