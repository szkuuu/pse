#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;
    unordered_set<string> dict;

    int len = str.length();

    for (int count = 1; count <= len; ++count) {
        for (int start = 0; start + count <= len; ++start) {
            dict.insert(str.substr(start, count));
        }
    }

    cout << dict.size() << '\n';

    return 0;
}

