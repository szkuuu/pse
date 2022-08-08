#include <bits/stdc++.h>

using namespace std;

int g_limit;
int g_res = 0;
array<int, 15> board;

bool ispromise(int row) {
    for (int i = 0; i < row; ++i) {
        if (board[row] == board[i] || row - i == abs(board[row] - board[i])) {
            return false;
        }
    }

    return true;
}

void queen(int row) {
    if (row == g_limit) {
        ++g_res;
        return;
    }

    for (int i = 0; i < g_limit; ++i) {
        board[row] = i;
        if (ispromise(row)) {
            queen(row + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_limit;

    queen(0);

    cout << g_res << '\n';

    return 0;
}

// time limit

