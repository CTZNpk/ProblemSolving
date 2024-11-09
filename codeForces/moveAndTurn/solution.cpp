#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int k = n / 2;
  if (n % 2) {
    cout << 2 * (k + 2) * (k + 1);
  } else {
    cout << (k + 1) * (k + 1);
  }

  return 0;
}
