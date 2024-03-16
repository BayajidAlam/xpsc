#include <bits/stdc++.h>
using namespace std;
int max_coins(int a, int b)
{
  if (a > b)
  {
    return a + max(a - 1, b);
  }
  else
  {
    return b + max(b - 1, a);
  }
}
int main()
{

  int a, b;
  cin >> a >> b;
  cout << max_coins(a, b) << endl;
  return 0;
}