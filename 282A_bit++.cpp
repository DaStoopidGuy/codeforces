/*
 * Link:
 *  https://codeforces.com/problemset/problem/282/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0;

    int n;
    cin >> n;

    for (int i=0; i<n ; i++) {
        string input;
        cin >> input;

        if (input.compare("++X") == 0 || input.compare("X++") == 0)
            x++;
        else if (input.compare("--X") == 0 || input.compare("X--") == 0)
            x--;

    }

    cout << x << "\n";
}
