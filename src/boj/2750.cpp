#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> ms;

    while (n > 0) {
        int item;
        cin >> item;

        ms.insert(item);
        n--;
    }

    for (const auto &item : ms) {
        cout << item << '\n';
    }

    return 0;
}

