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

std::string toLower(std::string s)
{
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c)
                 { return std::tolower(c); });
  return s;
}

int main(void)
{
  string W;
  string T;
  getline(cin, W);
  getline(cin, T);
  ll ans = 0;
  while (true)
  {
    if (T == "END_OF_TEXT")
    {
      break;
    }
    else
    {
      ans += toLower(T) == W;
    }

    cout << (toLower(T) == W ? "Yes" : "No");

    getline(cin, T);
  }
  cout << ans << endl;
  return 0;
}