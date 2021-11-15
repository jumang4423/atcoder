#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
using namespace std;

// ----- for manipulation -----
// std::fixed << std::setprecision(15)

int main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n, x;

  cin >> n >> x;

  while (!(n == 0 && x == 0))
  {
    int ans = 0;

    FOR(i, 1, n)
    {

      FOR(j, i, n)
      {

        if (i != j)
        {
          FOR(k, j, n)
          {

            if (j != k && i != k)
            {

              if (i + j + k == x)
              {
                ans += 1;
              }
            }
          }
        }
      }
    }

    cout << ans << endl;

    cin >> n >> x;
  }

  return 0;
}