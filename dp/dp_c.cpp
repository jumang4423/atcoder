#include <bits/stdc++.h>
typedef long long ll;
const long long INF = 1LL << 60;
#define REP(i, n) for (ll i = (0); i < ll(n); i++)
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

vector<vector<ll>> dp(100010, vector<ll>(3, -1));

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  ll n;
  cin >> n;
  int a[n][3];
  REP(i, n)
  {
    REP(j, 3)
    {
      cin >> a[i][j];
    }
  }

  REP(i, 3)
  {
    dp[0][i] = 0;
  }

  FOR(i, 0, n - 1)
  {
    REP(j, 3)
    {
      REP(k, 3)
      {
        if (j != k)
        {
          chmax(dp[i][j], dp[i - 1][j] + a[i - 1][k]);
        }
      }
    }
  }

  cout <<

      return 0;
}