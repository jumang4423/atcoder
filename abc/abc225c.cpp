#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (ll i = (0); i < (n); i++)
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

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;
  ll i_stack = -1;

  string answer = "Yes";

  REP(i, n)
  {
    ll j_stack = -1;
    REP(j, m)
    {
      ll a;
      cin >> a;
      if (j_stack == -1)
      {
        j_stack = a;
      }
      else if (a - j_stack != 1)
      {
        answer = "No";
      }
      j_stack = a;

      if (j == 0)
      {
        if (i_stack == -1)
        {
          i_stack = a;
        }
        else if (a - i_stack != 7)
        {
          answer = "No";
        }
        i_stack = a;
      }
    }
  }

  cout << answer << endl;
  return 0;
}