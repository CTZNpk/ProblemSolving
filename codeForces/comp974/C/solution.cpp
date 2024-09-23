#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

void sol(vector<double> a, int n) {
  if (n == 1 || n == 2) {
    cout << -1 << "\n";
    return;
  }
  sort(a.begin(), a.end());
  double avg = 0;
  for (auto i : a) {
    avg += i;
  }
  avg /= n;
  double halfAvg = avg / 2;
  double halfPop = a[n / 2];
  if (halfPop < halfAvg) {
    cout << 0 << "\n";
  } else {
    double x = ceil(2 * n * (halfPop - halfAvg) + 0.000000001);
    cout << x << "\n";
  }
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int tt;
  cin >> tt;

  while (tt--) {
    int n;
    cin >> n;
    vector<double> a(n);
    for (auto &i : a) {
      cin >> i;
    }
    sol(a, n);
  }

  return 0;
}
