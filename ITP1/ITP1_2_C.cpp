#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ar[3];
  cin >> ar[0];
  cin >> ar[1];
  cin >> ar[2];

  // sort
  sort(ar, ar + 3);

  // output
  cout << ar[0] << " " << ar[1] << " " << ar[2] << endl;

  return 0;
}