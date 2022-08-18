#include <bits/stdc++.h>

using namespace std;

int g_digit[10];
int g_six_or_nine = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(begin(g_digit), end(g_digit), 0);

    int n;
    cin >> n;

    while (n != 0) {
        if (n % 10 == 6 || n % 10 == 9) {
            g_six_or_nine++;
        } else {
            g_digit[n % 10]++;
        }

        n /= 10;
    }

    cout << max(*max_element(begin(g_digit), end(g_digit)), (g_six_or_nine + 1) / 2) << '\n';

    return 0;
}

//

