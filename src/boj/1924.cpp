#include <bits/stdc++.h>

using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m;
    int d;
    cin >> m >> d;

    int sum = 0;
    while (m > 1) {
        sum += month[m - 1];
        m--;
    }
    sum += d;

    cout << days[sum % 7] << '\n';

    return 0;
}

//

