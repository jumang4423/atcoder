#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
template <class T>
bool chmax(T &a, const T &b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
  if (b < a)
  {
    a = b;
    return 1;
  }
  return 0;
}
using namespace std;
#pragma GCC optimize("-O3")
//---------------------------------------------------------------------------------------------------

signed main(void)
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> t(n);
  REP(i, n)
  {
    cin >> t[i];
  }

  sort(t.rbegin(), t.rend());

  vector<int> A = {0};
  vector<int> B = {0};

  REP(i, n)
  {
    if (accumulate(A.begin(), A.end(), 0) < accumulate(B.begin(), B.end(), 0))
    {
      A.push_back(t[i]);
    }
    else
    {
      B.push_back(t[i]);
    }
  }

  cout << max(accumulate(A.begin(), A.end(), 0), accumulate(B.begin(), B.end(), 0)) << endl;

  return 0;
}