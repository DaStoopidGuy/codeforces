/*
 * Link:
 *  https://codeforces.com/problemset/problem/158/A
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores;

    for (int i=0; i<n; i++) {
        int score;
        cin >> score;

        scores.push_back(score);
    }

    int result = 0;

    for (int i=0; i<scores.size(); i++) {
        if (scores[i] >= scores[k-1] && scores[i] > 0)
            result++;
    }

    cout << result << "\n";
}
