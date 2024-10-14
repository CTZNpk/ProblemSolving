#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  int count = 0;
  for (auto &i : a) {
    cin >> i;
    m -= i;
    if (m >= 0) {
      count++;
    }
  }
  cout << count << "\n";

  return 0;
}
