#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vi k(n);
  vll c(m);
  for (auto &i : k) {
    cin >> i;
    i--;
  }
  for (auto &i : c) {
    cin >> i;
  }
  sort(all(k));

  int cI = 0;
  int kI = n - 1;
  ll min = 0;
  while (kI >= 0) {
    if (k[kI] > cI) {
      min += c[cI];
      cI++;
    } else {
      min += c[k[kI]];
    }
    kI--;
  }
  cout << min << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
