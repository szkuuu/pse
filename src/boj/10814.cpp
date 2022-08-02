#include <bits/stdc++.h>

using namespace std;

struct User {
    int age;
    string name;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector <User> v = {};

    for (int i = 0; i < n; ++i) {
        int age;
        string name;

        cin >> age >> name;

        v.push_back({.age = age, .name = name});
    }

    stable_sort(v.begin(), v.end(), [](const User &o0, const User &o1) -> bool {
        return o0.age < o1.age;
    });

    for (const auto &user : v) cout << user.age << ' ' << user.name << '\n';

    return 0;
}

