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

int checksum(int x)
{
  int sum = 0;
  while (x)
  {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, a, b, sum = 0;
  cin >> n >> a >> b;
  REP(i, n + 1)
  {
    int _sum = checksum(i);
    if (_sum >= a && _sum <= b)
    {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}