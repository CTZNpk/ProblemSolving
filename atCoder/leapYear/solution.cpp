#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int y;
  cin >> y;

  if (y % 4) {
    cout << 365;
  } else if (y % 100 == 0 && y % 400) {
    cout << 365;
  } else {
    cout << 366;
  }

  return 0;
}
