#include <bits/stdc++.h>
using namespace std;

int main()
{
  string st;
  cin >> st;
  vector<bool> present(26, false);

  for (char c : st)
  {
    present[c - 'a'] = true;
  }

  for (int i = 0; i < 26; i++)
  {
    if (!present[i])
    {
      cout << char(i + 'a') << "\n";
      return 0;
    }
  }

  cout << "None\n";
  return 0;
}