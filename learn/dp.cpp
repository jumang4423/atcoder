#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
template <class T>
bool chmax(T &a, const T &b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
  if (b < a)
  {
    a = b;
    return 1;
  }
  return 0;
}
using namespace std;
#pragma GCC optimize("-O3")
//---------------------------------------------------------------------------------------------------

int dp[100001];

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  int arr[5] = {1, 6, 10, 50, 234};
  fill(dp, dp + 100001, INFINITY);
  cin >> n;
  dp[0] = 0;

  FOR(i, 1, n)
  {
    REP(j, 5)
    {
      if (i < arr[j])
      {
        break;
      }
      chmin(dp[i], dp[i - arr[j]] + 1);
    }
  }

  cout << dp[n] << endl;

  return 0;
}