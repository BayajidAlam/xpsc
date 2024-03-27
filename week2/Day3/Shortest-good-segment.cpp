#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  ll s;
  cin >> n >> s;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll sum = 0;
  int l = 0, r = 0, ans = INT_MAX;
  while (r < n)
  {
    sum += a[r];
    while (sum >= s)
    {
      ans = min(ans, r - l + 1);
      sum -= a[l];
      l++;
    }
    r++;
  }

  if (ans == INT_MAX)
    ans = -1;
  cout << ans << "\n";
  return 0;
}