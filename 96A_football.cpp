/*
 * Link:
 *  https://codeforces.com/problemset/problem/96/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int count = 1;

    for (int i=1; i<s.length(); i++) {
        if (s[i] == s[i-1]) {
            count++;
            if (count >= 7) {
                cout << "YES\n";
                return 0;
            }
        }
        else
            count = 1;
    }

    cout << "NO\n";

    return 0;
}
