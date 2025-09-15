#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        unordered_set<int> used;

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] > 0) used.insert(p[i]);
        }
        int counter = n;
        for (int i = 0; i < n; i++) {
            if (p[i] == 0) {
                while (counter >= 1 && used.count(counter)) counter--;
                p[i] = counter;
                counter--;
            }
        }

        int L = -1, R = -1;
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                if (L == -1) L = i;
                R = i;
            }
        }

        if (L == -1) cout << 0 << "\n";
        else cout << (R - L + 1) << "\n";
    }
    return 0;
}