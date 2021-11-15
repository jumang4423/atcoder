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
  double r;
  cin >> r;
  cout << fixed << setprecision(6) << 1.0 * r * r * 3.141592653589 << " ";
  cout << fixed << setprecision(6) << 2.0 * r * 3.141592653589 << endl;

  return 0;
}