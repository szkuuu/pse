#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;
    int v;

    cin >> a >> b >> v;

    int p = v - b;
    double q = a - b;

    cout << static_cast<int>(ceil(p / q)) << '\n';

    return 0;
}

