#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    if (x <= 1399)
      cout << "Division 4" << endl;
    else if (1400 <= x && x <= 1599)
      cout << "Division 3" << endl;
    else if (1600 <= x && x <= 1899)
      cout << "Division 2" << endl;
    else
      cout << "Division 1" << endl;
  }

  return 0;
}