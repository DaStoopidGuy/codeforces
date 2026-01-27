#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    int total = 0;

    for (int i=0; i<n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end());

    int sum = 0;
    int c = 0;
    for (int i=a.size()-1; i>=0; i--) {
        c++;
        sum += a[i];
        if (sum > total/2)
            break;
    }

    cout << c << "\n";

    return 0;
}
