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

  int n;
  ll y;
  cin >> n >> y;

  FORD(i, n, 0)
  {
    FORD(j, n - i, 0)
    {
      FORD(k, n - j - i, 0)
      {
        if (i * 10000 + j * 5000 + k * 1000 == y && i + j + k == n)
        {
          cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;

  return 0;
}