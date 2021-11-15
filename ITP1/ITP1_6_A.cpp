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
  int n;
  vector<int> a;
  cin >> n;
  REP(i, n)
  {
    int x;
    cin >> x;
    a.push_back(x);
  }

  REPD(i, n)
  {
    cout << a[i];
    if (i != 0)
      cout << " ";
    else
      cout << endl;
  }

  return 0;
}