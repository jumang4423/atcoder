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

  int k, s;
  cin >> k >> s;

  int ans = 0;

  FORD(x, s, 0)
  {
    FORD(y, s - x, 0)
    {
      int z = s - x - y;
      if (0 <= x && x <= k && 0 <= y && y <= k && 0 <= z && z <= k)
      {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}