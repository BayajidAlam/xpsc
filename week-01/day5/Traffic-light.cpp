#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    vector<int> dist(n * 2 + 1, n * 2);
    for (int i = n * 2 - 1; i >= 0; --i)
    {
      if (s[i] == 'g')
      {
        dist[i] = 0;
      }
      else
      {
        dist[i] = dist[i + 1] + 1;
      }
    }
    int max_dist = 0;
    for (int i = 0; i < n; ++i)
    {
      if (s[i] == c)
      {
        max_dist = max(max_dist, dist[i]);
      }
    }
    cout << max_dist << "\n";
  }
  return 0;
}