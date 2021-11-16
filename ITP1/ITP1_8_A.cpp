#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
using namespace std;

int main(void)
{
  string s;
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  getline(std::cin, s);

  REP(i, s.size())
  {
    if ((s[i] >= 'A' && s[i] <= 'Z'))
    {
      cout << (char)tolower(s[i]);
    }
    else if ((s[i] >= 'a' && s[i] <= 'z'))
    {
      cout << (char)toupper(s[i]);
    }
    else
    {
      cout << s[i];
    }
  }
  cout << endl;

  return 0;
}