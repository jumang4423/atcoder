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
  cin >> n;
  vector<bool> S(13);
  vector<bool> H(13);
  vector<bool> C(13);
  vector<bool> D(13);

  REP(i, n)
  {
    char c;
    int x;
    cin >> c >> x;
    switch (c)
    {
    case 'S':
      S[x-1] = true;
      break;
    case 'H':
      H[x-1] = true;
      break;
    case 'C':
      C[x-1] = true;
      break;
    case 'D':
      D[x-1] = true;
      break;
    }
  }

  int watching = 0;
  FORA(e, S)
  {
    if (e == false)
    {
      cout << "S ";
      cout << watching + 1 << endl;
    }
    watching++;
  }

  watching = 0;
  FORA(e, H)
  {
    if (e == false)
    {
      cout << "H ";
      cout << watching + 1 << endl;
    }
    watching++;
  }

  watching = 0;
  FORA(e, C)
  {
    if (e == false)
    {
      cout << "C ";
      cout << watching + 1 << endl;
    }
    watching++;
  }

  watching = 0;
  FORA(e, D)
  {
    if (e == false)
    {
      cout << "D ";
      cout << watching + 1 << endl;
    }
    watching++;
  }

  return 0;
}