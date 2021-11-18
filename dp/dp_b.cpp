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

vector<ll> dp(100010, INF);

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  ll h[n];
  REP(i, n)
  {
    cin >> h[i];
  }
  dp[0] = 0;
  FOR(i, 1, n)
  {
    FOR(j, 1, k)
    {
      if (j <= i)
      {
        chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j])) ;
      }
    }
  }

  cout << dp[n - 1] << endl;

  return 0;
}