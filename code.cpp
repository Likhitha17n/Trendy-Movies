#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a, b, c, d;
   cin >> a >> b >> c >> d;

   // Ensure a < b and c < d
   if (a > b) swap(a, b);
   if (c > d) swap(c, d);

   // Check for non-intersecting conditions
   bool non_overlap = (b < c || d < a);

   if (non_overlap) {
       cout << "YES" << endl;
   } else {
       cout << "NO" << endl;
   }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
