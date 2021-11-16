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
  int a, b, c, x, answer = 0;
  cin >> a >> b >> c >> x;
  FOR(i, 0, a)
  {
    FOR(j, 0, b)
    {
      FOR(k, 0, c)
      {
        if (i * 500 + j * 100 + k * 50 == x)
        {
          answer += 1;
        }
      }
    }
  }

  cout << answer << endl;

  return 0;
}