#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  int maxW = 0, maxH = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    if (l > maxW) {
      sum += l - maxW;
      maxW = l;
    }
    if (r > maxH) {
      sum += r - maxH;
      maxH = r;
    }
  }
  cout << sum * 2 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
