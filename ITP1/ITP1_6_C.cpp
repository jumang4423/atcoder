#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
#define MAX_N 1000
using namespace std;

int main()
{
  int place[4][3][10];
  // init place
  REP(i, 4)
  {
    REP(j, 3)
    {
      REP(k, 10)
      {
        place[i][j][k] = 0;
      }
    }
  }
  // input
  int n;
  cin >> n;
  REP(i, n)
  {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    place[b-1][f-1][r-1] += v;
  }

  // display
  REP(i, 4)
  {
    REP(j, 3)
    {
      REP(k, 10)
      {
        cout << " "<< place[i][j][k];
        if (k == 9)
        {
          cout << endl;
        }
      }
    }
    if (i != 3)
    {
      cout << "####################" << endl;
    }
  }

  return 0;
}