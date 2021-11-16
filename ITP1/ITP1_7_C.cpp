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

  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N + 1, vector<int>(M + 1));
  REP(i, N)
      REP(j, M) cin >> A[i][j];

  REP(i, N)
  {
    int sum = 0;
    REP(j, M)
    {
      sum += A[i][j];
    }
    A[i][M] = sum;
  }

  REP(j, M + 1)
  {
    int sum = 0;
    REP(i, N)
    {
      sum += A[i][j];
    }
    A[N][j] = sum;
  }

  // output
  REP(i, N + 1)
  {
    REP(j, M + 1)
    {
      cout << A[i][j];
      if (j != M)
        cout << " ";
      else
        cout << endl;
    }
  }

  return 0;
}