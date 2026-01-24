/*
 * Link:
 *  https://codeforces.com/problemset/problem/339/A
 */
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> nums;

    for (int i=0; i<input.length(); i++) {
        char c = input[i];
        
        if (c == '+') continue;

        int num = stoi(&input[i]);
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    for (int i=0; i<nums.size(); i++) {
        int num = nums[i];

        cout << num;
        if (i < nums.size()-1)
            cout << "+";
    }
    cout << "\n";

    return 0;
}
