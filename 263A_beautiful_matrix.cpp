/*
 * Link:
 *  https://codeforces.com/problemset/problem/263/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;

    // input 5 rows of 5x5 matrix
    for (int i=0; i<5; i++) {
        // 5 cols in each row
        int num;

        for (int j=0; j<5; j++) {
            cin >> num;

            if (num == 1) {
                x = i;
                y = j;
            }
        }
    }

    int result = abs(2-x) + abs(2-y);
    cout << result << "\n";
}
