#include <bits/stdc++.h>
#define REP(i, n) for (int i = (0); i < (n); i++)
#define MAX_N 10000
using namespace std;

int main()
{
  // define Vector
  vector<int> v;
  int _temp;

  REP(i, MAX_N)
  {
    cin >> _temp;
    if (_temp == 0)
      break;
    v.push_back(_temp);
  }

  REP(i, v.size())
  {
    cout << "Case " << i + 1 << ": " << v[i] << endl;
  }
  return 0;
}