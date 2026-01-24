/*
 * Link:
 *  https://codeforces.com/problemset/problem/112/A
 *
 *  To determine which of two strings of characters comes first when arranging
 *  in alphabetical order, their first letters are compared. If they differ,
 *  then the string whose first letter comes earlier in the alphabet comes
 *  before the other string. If the first letters are the same, then the second
 *  letters are compared, and so on. If a position is reached where one string
 *  has no more letters to compare while the other does, then the shorter
 *  string is deemed to come first in alphabetical order.
 */
#include <bits/stdc++.h>
using namespace std;

string toLower(string s) {
    string ret;

    for (int i=0; i<s.length(); i++) {
        char c = s[i];

        if (c < 'a') {
            c += 'z' - 'Z';
        }

        ret += c;
    }

    return ret;
}

int compare(string a, string b) {
    int ret = 0;

    // assuming both strings have same length
    for (int i=0; i<a.length(); i++) {
        if (a[i] == b[i]) continue;
        ret = a[i] - b[i];
        ret = ret/abs(ret);
        break;
    }

    return ret;
}

int main() {
    string a, b;
    cin >> a >> b;

    a = toLower(a);
    b = toLower(b);

    cout << compare(a, b) << "\n";

    return 0;
}
