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
  int a, b;
  cin >> a >> b;
  cout << a / b << " ";
  cout << a % b << " ";
  cout << fixed << setprecision(8) << 1.0 * a / b << endl;

  return 0;
}