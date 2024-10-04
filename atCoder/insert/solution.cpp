#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, k, x;
  cin >> n >> k >> x;
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    cout << l << " ";
    if (i == k - 1) {
      cout << x << " ";
    }
  }

  return 0;
}
