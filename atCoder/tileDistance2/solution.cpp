#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(int argc, char *argv[]) {

  ll Sx, Sy, Tx, Ty;
  cin >> Sx >> Sy;
  cin >> Tx >> Ty;
  if ((Sx + Sy) % 2 == 1) {
    --Sx;
  }
  if ((Tx + Ty) % 2 == 1) {
    --Tx;
  }

  ll dx = abs(Sx - Tx);
  ll dy = abs(Sy - Ty);

  cout << (dy + max(dx, dy)) / 2;

  return 0;
}
