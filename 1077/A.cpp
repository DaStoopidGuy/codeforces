#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    for (int i=0; i<t; i++) {
        int n; cin >> n;

        vector<int> p;

        for (int i=1; i<=n; i++)
            p.push_back(i);

        do {
            bool valid = true;

            for (int j=0; j<n-1; j++) {
                bool check = abs(p[j] - p[j+1]) % (j+1) == 0;
                if (!check)
                    valid = false;
            }

            if (!valid) continue;

            for (int np: p)
                cout << np << " ";
            cout << "\n";
            break;

        } while (next_permutation(p.begin(), p.end()));
    }

    return 0;
}
