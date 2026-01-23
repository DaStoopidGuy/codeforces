/*
 * Link:
 *  https://codeforces.com/problemset/problem/231/A
 */

#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i=a; i<b; i++)

int main() {
    int n;
    cin >> n;

    int output = 0;

    REP(i, 0, n) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b+c >= 2) output++;
    }

    cout << output << "\n";

}
