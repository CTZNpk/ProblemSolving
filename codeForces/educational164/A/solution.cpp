#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pb push_back

void sol() {
  int n, m, k;
  cin >> n >> m >> k;
  if (m == 1) {
    cout << "NO\n";
    return;
  }
  int repaint = n;
  if (m > 1) {
    repaint *= m - 1;
  }
  repaint /= m;
  if (k >= repaint) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }

  return 0;
}
