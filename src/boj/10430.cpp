#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    int r0 = (a + b) % c;
    int r1 = ((a % c) + (b % c)) % c;
    int r2 = (a * b) % c;
    int r3 = ((a % c) * (b % c)) % c;

    cout << r0 << '\n' << r1 << '\n' << r2 << '\n' << r3 << '\n';

    return 0;
}

