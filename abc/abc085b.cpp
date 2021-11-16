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
  cin >> n;
  vector<int> a(n);
  REP(i, n)
      cin >> a[i];
  sort(a.begin(), a.end());

  // delete duplication from a
  int cnt = 0;
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i - 1])
    {
      a[++cnt] = a[i];
    }
  }

  cout << cnt + 1 << endl;

  return 0;
}