/*
 * Link:
 *  https://codeforces.com/problemset/problem/71/A
 */

#include <bits/stdc++.h>
using namespace std;

string too_long(string word) {
    if (word.length() <= 10)
        return word;

    string newWord;

    char first = word[0];
    char last = word[word.length() - 1];
    int numCharsInBetween = word.length() - 2;

    newWord += first;
    newWord += to_string(numCharsInBetween);
    newWord += last;


    return newWord;
}

int main(void) {
    int n; // contains number of subsequent lines
    cin >> n;

    vector<string> words;

    for (int i=0; i<n; i++) {
        string buffer;
        cin >> buffer;

        words.push_back(too_long(buffer));
    }

    for (int i=0; i<words.size(); i++) {
        cout << words[i] << "\n";
    }


    return 0;
}
