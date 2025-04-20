#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    string s;
    cin >> n >> s;

    // Step 1: Swap adjacent characters
    for (ll i = 0; i + 1 < n; i += 2) {
        swap(s[i], s[i+1]);
    }

    // Step 2: For each character, mirror it
    for (ll i = 0; i < n; i++) {
        s[i] = 'a' + ('z' - s[i]);
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
