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
  int n;
  cin >> n;
  pair<int, int> a[n];
  REP(i, n)
  {
    cin >> a[i].first >> a[i].second;
  }

  double max = 0.0;

  REP(i, n)
  {
    REP(j, n)
    {

      if (i == j)
        continue;

      double result = sqrt(pow(a[i].first - a[j].first, 2) + pow(a[i].second - a[j].second, 2));
      if (result > max)
      {
        max = result;
      }
    }
  }

  cout << max << endl;

  return 0;
}