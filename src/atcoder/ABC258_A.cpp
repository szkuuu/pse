#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h = 21;
    int m = 0;
    int add;
    cin >> add;

    h += (add / 60);
    m += (add % 60);

    cout.fill('0');
    cout << setw(2) << h;
    cout << ":";
    cout << setw(2) << m;
    cout << '\n';

    return 0;
}

//

