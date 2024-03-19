#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  vector<bool> freq(n + 1, true);
  for (int i = 1; i < n; i++)
  {
    int x;
    cin >> x;
    freq[x] = false;
  }
  for (int i = 1; i <= n; i++)
  {
    if (freq[i])
    {
      cout << i << endl;
    }
  }
  return 0;
}