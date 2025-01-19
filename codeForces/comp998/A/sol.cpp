#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  vi a;
  for (int i = 0; i < 4; i++) {
    int k;
    cin >> k;
    a.push_back(k);
    if (i == 1) {
      a.push_back(a[0] + a[1]);
    }
  }
  int deg1 = 0;
  for (int i = 0; i <= 2; i++) {
    if (a[i + 2] == a[i] + a[i + 1]) {
      deg1++;
    }
  }
  int deg2 = 0;
  a[2] = a[3] - a[1];
  for (int i = 0; i <= 2; i++) {
    if (a[i + 2] == a[i] + a[i + 1]) {
      deg2++;
    }
  }
  cout << max(deg1, deg2) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
