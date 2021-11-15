#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for (int i = (0); i < (n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)
#define MAX_N 10000
using namespace std;

void call(int n)
{
  int i = 1;
CHECK_NUM:
  int x = i;
  if (x % 3 == 0)
  {
    cout << " " << i;
    goto END_CHECK_NUM;
  }
INCLUDE3:
  if (x % 10 == 3)
  {
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if (x)
    goto INCLUDE3;
END_CHECK_NUM:
  if (++i <= n)
    goto CHECK_NUM;

  cout << endl;
}

int main()
{

  call(5);
  return 0;
}