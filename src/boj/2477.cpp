#include <bits/stdc++.h>

using namespace std;

static int rot0[6] = {4, 2, 3, 1, 3, 1};
static int rot1[6] = {4, 2, 3, 1, 4, 1};
static int rot2[6] = {4, 2, 4, 2, 3, 1};
static int rot3[6] = {4, 2, 3, 2, 3, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int info[6][2];

    int n;
    cin >> n;

    for (auto &lot: info) cin >> lot[0] >> lot[1];

    for (int from = 0, to = from + 6; from < 6; ++from, ++to) {
        bool isrot[4] = {true, true, true, true};
        bool isok = true;

        for (int i = from, j = 0; i < to || j < 6; ++i, ++j) {
            isrot[0] &= (info[i % 6][0] == rot0[j]);
            isrot[1] &= (info[i % 6][0] == rot1[j]);
            isrot[2] &= (info[i % 6][0] == rot2[j]);
            isrot[3] &= (info[i % 6][0] == rot3[j]);

            if (!(isrot[0] || isrot[1] || isrot[2] || isrot[3])) break;
        }

        int position[4];

        if (isrot[0]) {
            position[0] = (from + 0) % 6;
            position[1] = (from + 1) % 6;
            position[2] = (from + 3) % 6;
            position[3] = (from + 4) % 6;
        } else if (isrot[1]) {
            position[0] = (from + 1) % 6;
            position[1] = (from + 2) % 6;
            position[2] = (from + 4) % 6;
            position[3] = (from + 5) % 6;
        } else if (isrot[2]) {
            position[0] = (from + 4) % 6;
            position[1] = (from + 5) % 6;
            position[2] = (from + 1) % 6;
            position[3] = (from + 2) % 6;
        } else if (isrot[3]) {
            position[0] = (from + 0) % 6;
            position[1] = (from + 5) % 6;
            position[2] = (from + 2) % 6;
            position[3] = (from + 3) % 6;
        } else {
            continue;
        }

        cout << ((info[position[0]][1] * info[position[1]][1]) - (info[position[2]][1] * info[position[3]][1])) * n << '\n';
        break;
    }

    return 0;
}

