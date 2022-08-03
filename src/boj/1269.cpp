#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;
    cin >> a >> b;

    multiset<int> va;
    multiset<int> vb;

    while (a > 0) {
        int item;
        cin >> item;

        va.insert(item);
        a--;
    }

    while (b > 0) {
        int item;
        cin >> item;

        vb.insert(item);
        b--;
    }

    vector<int> vab;
    vector<int> vba;

    set_difference(va.begin(), va.end(), vb.begin(), vb.end(), back_inserter(vab));
    set_difference(vb.begin(), vb.end(), va.begin(), va.end(), back_inserter(vba));

    cout << vab.size() + vba.size() << '\n';

    return 0;
}

