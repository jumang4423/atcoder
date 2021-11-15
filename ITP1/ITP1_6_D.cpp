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
  int y, x;
  cin >> y >> x;
  vector<vector<int>> A(y, vector<int>(x));
  vector<int> B(y);
  REP(j, y)
  {
    REP(i, x)
    {
      cin >> A[j][i];
    }
  }
  REP(i, x)
  {
    cin >> B[i];
  }
  // calc
  REP(j, y)
  {
    ll ans = 0;
    REP(i, x)
    {
      ans += A[j][i] * B[i];
    }
    cout << ans << endl;
  }

  return 0;
}