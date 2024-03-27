#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k) {
    int n = s.size();
    int ans = -1;
    vector<int> count(26, 0);
    int unique = 0;
    int l = 0, r = 0;

    while (r < n) {
        if (count[s[r] - 'a'] == 0) {
            unique++;
        }
        count[s[r] - 'a']++;
        while (unique > k) {
            count[s[l] - 'a']--;
            if (count[s[l] - 'a'] == 0) {
                unique--;
            }
            l++;
        }
        if (unique == k) {
            ans = max(ans, r - l + 1);
        }
        r++;
    }

    return ans;
}