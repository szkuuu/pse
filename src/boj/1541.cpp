#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int ret = 0;
    bool minus_mode = false;
    int minus_storage = 0;

    stringstream ss;
    for (const auto ch : s) {
        switch (ch) {
            case '-':
                if (minus_mode) {
                    ret -= stoi(ss.str());
                    ret -= minus_storage;

                    minus_storage = 0;
                } else {
                    minus_mode = true;
                    ret += stoi(ss.str());
                }

                ss.str("");
                break;
            case '+':
                if (minus_mode) {
                    minus_storage += stoi(ss.str());
                } else {
                    ret += stoi(ss.str());
                }

                ss.str("");
                break;
            default:
                ss << ch;
                break;
        }
    }

    if (minus_mode) {
        minus_storage += stoi(ss.str());
        ret -= minus_storage;
    } else {
        ret += stoi(ss.str());
    }
    ss.clear();

    cout << ret << '\n';

    return 0;
}

//

