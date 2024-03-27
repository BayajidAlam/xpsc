#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  long long s;
  cin >> n >> s;
  vector<long long> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long ans = 0, sum = 0;
  int l = 0, r = 0;

  while (r < n)
  {
    sum += a[r];
    while (sum >= s)
    {
      ans += (n - r);
      sum -= a[l];
      l++;
    }
    r++;
  }

  cout << ans << '\n';

  return 0;
}