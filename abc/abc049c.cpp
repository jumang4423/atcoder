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

string words[4] = {"dream", "dreamer", "erase", "eraser"};

int main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  string str;
  cin >> str;

  reverse(str.begin(), str.end());
  REP(i, 4)
  {
    reverse(words[i].begin(), words[i].end());
  }

  REP(i, str.size())
  {
    bool ok = false;
    REP(j, 4)
    {
      if (str.substr(i, words[j].size()) == words[j])
      {
        i += words[j].size() - 1;
        ok = true;
      }
    }
    if (!ok)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}