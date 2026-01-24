/*
 * Link:
 *  https://codeforces.com/problemset/problem/236/A
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;
    
    set<char> chars;

    for (int i=0; i<name.length(); i++)
        chars.insert(name[i]);

    if (chars.size()%2 != 0) // odd
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";

    return 0;
}
