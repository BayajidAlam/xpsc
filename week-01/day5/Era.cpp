#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll max_even_sum(vector<int> &nums)
{
  ll total_sum = 0;
  ll min_odd = INT_MAX;
  for (ll num : nums)
  {
    total_sum += num;
    if (num % 2 != 0)
    {
      min_odd = min(min_odd, num);
    }
  }
  if (total_sum % 2 != 0)
  {
    total_sum -= min_odd;
  }
  return total_sum;
}

int main()
{
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  cout << max_even_sum(nums) << endl;
  return 0;
}