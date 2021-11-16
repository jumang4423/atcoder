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

  string abcd;
  cin >> abcd;

  for (int i = 0; i < (1 << 3); i++)
  {

    int res = abcd[0] - '0';
    REP(j, 3)
    {
      if (i & (1 << j))
      {
        // +
        res += abcd[j + 1] - '0';
      }
      else
      {
        // -
        res -= abcd[j + 1] - '0';
      }
    }

    if (res == 7)
    {
      // printout
      cout << abcd[0];
      REP(j, 3)
      {
        if (i & (1 << j))
        {
          // +
          cout << "+" << abcd[j + 1];
        }
        else
        {
          // -
          cout << "-" << abcd[j + 1];
        }
      }
      cout << "=7" << endl;
      return 0;
    }
  }

  return 0;
}