#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int m;
    cin >> n >> m;

    map<int, string> pokemon;
    map<string, int> pokemon_reverse;

    for (int i = 0; i < n; ++i) {
        string pk_name;
        cin >> pk_name;

        pokemon[i + 1] = pk_name;
        pokemon_reverse[pk_name] = i + 1;
    }

    for (int i = m; i > 0; --i) {
        string problem;
        cin >> problem;

        if (isdigit(problem[0])) {
            cout << pokemon[stoi(problem)] << '\n';
        } else {
            cout << pokemon_reverse[problem] << '\n';
        }
    }

    return 0;
}

