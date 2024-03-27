#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = 0;
    vector<int> count(100001, 0);
    int unique = 0;
    int l = 0, r = 0;

    while (r < n) {
        if (count[a[r]] == 0) {
            unique++;
        }
        count[a[r]]++;
        while (unique > k) {
            count[a[l]]--;
            if (count[a[l]] == 0) {
                unique--;
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }

    cout << ans << '\n';

    return 0;
}