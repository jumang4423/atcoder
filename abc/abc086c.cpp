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
vector<vector<int>> movements = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

struct Point
{
  int t, x, y;
};

int main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<Point> points(N + 1);

  int cur_x = 0, cur_y = 0;

  REP(i, N)
  {
    cin >> points[i + 1].t;
    cin >> points[i + 1].x;
    cin >> points[i + 1].y;
  }

  bool reachable = true;

  REP(i, N)
  {

    int t_dif = points[i + 1].t - points[i].t;
    int pos = abs(points[i + 1].x - points[i].x) + abs(points[i + 1].y - points[i].y);

    if (t_dif < pos || t_dif % 2 != pos % 2)
    {
      reachable = false;
      break;
    }
  }

  if (reachable) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}