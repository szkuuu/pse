#include <bits/stdc++.h>
 
using namespace std;
 
int g_alpha[26];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    for (int i = 0; i < 3; ++i) {
        char ch;
        cin >> ch;
 
        g_alpha[ch - 'a']++;
    }
 
    char res = '\0';
    for (size_t i = 0; i < size(g_alpha); ++i) {
        if (g_alpha[i] == 1) {
            res = static_cast<char>(i + 'a');
            break;
        }
    }
 
    if (res == '\0') {
        cout << -1 << '\n';
    } else {
        cout << res << '\n';
    }
 
    return 0;
}
 
//
