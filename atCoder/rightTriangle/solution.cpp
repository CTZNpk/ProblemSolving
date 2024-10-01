#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int xA, yA, xB, yB, xC, yC;

  cin >> xA >> yA >> xB >> yB >> xC >> yC;

  int dist1 = pow(xB - xA, 2) + pow(yB - yA, 2);
  int dist2 = pow(xC - xA, 2) + pow(yC - yA, 2);
  int dist3 = pow(xC - xB, 2) + pow(yC - yB, 2);

  bool f = false;
  if (dist1 >= dist2 && dist1 >= dist3) {
    f = dist1 == dist2 + dist3;

  } else if (dist2 >= dist3 && dist2 >= dist1) {

    f = dist2 == dist1 + dist3;
  } else {
    f = dist3 == dist1 + dist2;
  }
  if (f) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}
