#include <bits/stdc++.h>
typedef long long ll;
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

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  ll n, q, c;
  ll x, y;
  cin >> n >> q;
  vector<ll> before(n + 1, -1), after(n + 1, -1);

  REP(i, q)
  {
    cin >> c;
    if (c == 1)
    {
      cin >> x >> y;
      after[x] = y;
      before[y] = x;
    }
    else if (c == 2)
    {
      cin >> x >> y;
      after[x] = -1;
      before[y] = -1;
    }
    else
    {
      cin >> x;

      while (before[x] != -1)
      {
        x = before[x];
      }
      vector<ll> train;

      while (x != -1)
      {
        train.push_back(x);
        x = after[x];
      }

      // show train
      cout << train.size();
      REP(i, train.size())
      {
        cout << " " << train[i];
      }
      cout << endl;
    }
  }

  return 0;
}