#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  for (int i = 0; i * a <= c; ++i)
  {
    if ((c - i * a) % b == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}