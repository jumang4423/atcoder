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

  string x;

  cin >> x;

  while (x[0] != '0')
  {
    ll sum = 0;
    REP(i, x.size())
    {
      sum += x[i] - '0';
    }
    cout << sum << endl;
    cin >> x;
  }

  return 0;
}