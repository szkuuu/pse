#include <bits/stdc++.h>

using namespace std;

int g_rec_count = 0;
int g_dyn_pr_count = 0;

array<int, 41> g_fib_table;

void fib_rec(int n) {
    if (n == 1 || n == 2) return;

    ++g_rec_count;

    fib_rec(n - 1);
    fib_rec(n - 2);
}

void fib_dyn_pr(int n) {
    g_fib_table[1] = 1;
    g_fib_table[2] = 1;

    for (int i = 3; i <= n; ++i) {
        g_fib_table[i] = g_fib_table[i - 2] + g_fib_table[i - 1];
        ++g_dyn_pr_count;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    fib_rec(n);
    fib_dyn_pr(n);

    cout << g_rec_count + 1 << ' ' << g_dyn_pr_count << '\n';

    return 0;
}

// 9 min. 25

