#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
using namespace std;

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  string n;
  cin >> n;
  ll sum = 0;

  for (int i = 0; i < (1 << (n.size() - 1)); i++)
  {

    ll _current = n[0] - '0';
    ll sm = 0;

    REP(j, n.size() - 1)
    {
      if (i & (1 << j))
      {
        sm += _current;
        _current = 0;
      }
      _current *= 10;
      _current += n[j + 1] - '0';
    }
    sm += _current;
    sum += sm;
  }

  cout << sum << endl;

  return 0;
}