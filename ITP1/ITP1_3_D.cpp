#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
#define MAX_N 10000
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;

  FOR(i, a, b)
  {
    if (c % i == 0)
    {
      ans += 1;
    }
  }

  cout << ans << endl;

  return 0;
}