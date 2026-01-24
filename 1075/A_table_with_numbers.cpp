#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // testcases
    cin >> t;

    vector<int> results;

    // input testcases
    for (int i=0; i<t; i++) {
        int result = 0;

        int n, h, l;
        cin >> n >> h >> l;

        // input array elems
        vector<int> array;
        for (int j=0; j<n; j++) {
            int num;
            cin >> num;

            if (num > h && num > l) continue;
            array.push_back(num);
        }

        cout << "Array len: " << array.size() << endl;

        // make k pairs from array where (2k <= n)
        int k = n/2;
        for (int m=0; m<k && array.size() > 0; m++) {
            int x = array[m*2];
            int y = array[(m*2)+1];

            // skip pair if cell (x,y) doesnt exist
            if (x > h || y > l)
                continue;

            // add 1 to number is cell (x, y) if cell exists
            // if cell isnt present
            result += 1;
        }

        results.push_back(result);
    }

    for (auto result: results) {
        cout << result << "\n";
    }
}
