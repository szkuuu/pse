#include <bits/stdc++.h>

using namespace std;

static string tile(int n, int cmp = 3, const string& cell = "*") {
    string cell_copied(cell);
    string blank(cmp / 3, ' ');
    vector<string> cell_split = {};

    size_t position = 0;
    string token;

    while ((position = cell_copied.find('\n')) != string::npos) {
        token = cell_copied.substr(0, position);
        cell_split.push_back(token);
        cell_copied.erase(0, position + 1);
    }

    if (cell_split.size() == 0) cell_split.push_back(cell);

    ostringstream ss;

    for (int i = 3; i > 0; --i) {
        for (const auto &cl : cell_split) {
            ss << cl << (i == 2 ? blank : cl) << cl << '\n';
        }
    }

    if (n == cmp) return ss.str();

    return tile(n, cmp * 3, ss.str());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    cout << tile(n) << '\n';

    return 0;
}

