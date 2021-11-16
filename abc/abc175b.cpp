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
  vector<int> l(n);
  REP(i, n)
  {
    cin >> l[i];
  }

  int ans = 0;

  FOR(a, 0, n)
  {
    FOR(b, a, n)
    {
      FOR(c, b, n)
      {
        if (l[a] + l[b] > l[c] && l[a] + l[c] > l[b] && l[b] + l[c] > l[a])
        {
          if (l[a] != l[b] && l[b] != l[c] && l[a] != l[c])
          {
            ans++;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
