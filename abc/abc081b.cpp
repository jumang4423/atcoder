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

  int n, ans = 0;
  vector<int> arr;
  cin >> n;
  REP(i, n)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }

  while (true)
  {
    bool is_all_odd = true;
    REP(i, n)
    {
      if (arr[i] % 2 != 0)
      {
        is_all_odd = false;
        cout << ans << endl;
        return 0;
      }
    }
    if (is_all_odd)
    {
      ans += 1;
      REP(i, n)
      {
        arr[i] /= 2;
      }
    }
  }
}