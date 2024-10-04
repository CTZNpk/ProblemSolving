#include <bits/stdc++.h>

using namespace std;

bool intersect(int x1, int x2, int x3, int x4) {
  return max(x1, x3) < min(x2, x4);
}

int main(int argc, char *argv[]) {
  int x1, y1, z1, x2, y2, z2;
  cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
  int x3, y3, z3, x4, y4, z4;
  cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

  if (intersect(x1, x2, x3, x4) && intersect(y1, y2, y3, y4) &&
      intersect(z1, z2, z3, z4)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}
