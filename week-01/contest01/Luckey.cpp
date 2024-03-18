#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    string st;
    cin >> st;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < st.length(); i++)
    {
      if (i <= 2)
      {
        sum1 += st[i];
      }
      else
      {
        sum2 += st[i];
      }
    }

    cout << (sum1 == sum2 ? "YES" : "NO") << endl;
  }

  return 0;
}