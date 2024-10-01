#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int r, g, b;
  string c;
  cin >> r >> g >> b;
  cin >> c;

  if (c == "Red") {
    cout << min(g, b);

  } else if (c == "Blue") {
    cout << min(r, g);

  } else {

    cout << min(r, b);
  }

  return 0;
}
