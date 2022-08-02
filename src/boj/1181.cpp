#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    set <string> sts = {};

    while (n > 0) {
        string str;
        cin >> str;

        sts.insert(str);

        n--;
    }

    vector <string> v = {};

    copy(sts.begin(), sts.end(), back_inserter(v));

    sort(v.begin(), v.end(), [](const string &o0, const string &o1) -> bool {
        return o0.size() == o1.size() ? o0 < o1 : o0.size() < o1.size();
    });

    for (const auto &item : v) cout << item << '\n';

    return 0;
}

