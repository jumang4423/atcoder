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

  string s;
  cin >> s;
  int exp_len;
  cin >> exp_len;
  REP(i, exp_len)
  {
    string exp;
    cin >> exp;
    if (exp == "print")
    {
      int a, b;
      cin >> a >> b;
      cout << s.substr(a, b - a + 1) << endl;
    }
    else if (exp == "reverse")
    {
      int a, b;
      cin >> a >> b;
      reverse(s.begin() + a, s.begin() + b + 1);
    }
    else if (exp == "replace")
    {
      int a, b;
      cin >> a >> b;
      string t;
      cin >> t;
      s.replace(a, b - a + 1, t);
    }
  }

  return 0;
}