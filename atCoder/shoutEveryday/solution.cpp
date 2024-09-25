#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a, b, c;

  cin >> a >> b >> c;

  if (a > b && a < c) {
    cout << "No";
  } else if ((c < b) && (a < c || a > b)) {
    cout << "No";
  } else {
    cout << "Yes";
  }

  return 0;
}
