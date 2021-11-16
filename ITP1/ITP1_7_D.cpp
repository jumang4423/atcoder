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

  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<int>> A(n, vector<int>(m));
  vector<vector<int>> B(m, vector<int>(l));

  REP(i, n)
  REP(j, m)
      cin >> A[i][j];
  REP(i, m)
  REP(j, l)
      cin >> B[i][j];

  vector<vector<ll>> C(n, vector<ll>(l));
  REP(i, n)
  {
    REP(j, l)
    {
      REP(k, m)
      C[i][j] += A[i][k] * B[k][j];
    }
  }

  // output
  REP(i, n)
  {
    REP(j, l)
    {
      cout << C[i][j];
      if (j != l - 1)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}