#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> blanks;
array<array<int, 9>, 9> board;
bool isfull = false;

bool ispromise(const pair<int, int> &pos) {
    int row = pos.first;
    int col = pos.second;

    for (int i = 0; i < 9; ++i) {
        if (board[i][col] == board[pos.first][pos.second] && i != pos.first) return false;
        if (board[row][i] == board[pos.first][pos.second] && i != pos.second) return false;
    }

    int vv = row / 3;
    int hv = col / 3;

    for (int i = vv * 3; i < vv * 3 + 3; ++i) {
        for (int j = hv * 3; j < hv * 3 + 3; ++j) {
            if (board[i][j] == board[pos.first][pos.second]) {
                if (i != pos.first && i != pos.second) return false;
            }
        }
    }

    return true;
}

void sudoku(int pos) {
    if (size(blanks) == pos) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cout << board[i][j] << ' ';
            }
            cout << '\n';
        }

        isfull = true;
        return;
    }

    for (int i = 1; i <= 9; ++i) {
        board[blanks[pos].first][blanks[pos].second] = i;

        if (ispromise(blanks[pos])) {
            sudoku(pos + 1);
        }

        if (isfull) return;
    }

    board[blanks[pos].first][blanks[pos].second] = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int item;
            cin >> item;

            board[i][j] = item;

            if (item == 0) blanks.emplace_back(i, j);
        }
    }

    sudoku(0);

    return 0;
}

// time limit

