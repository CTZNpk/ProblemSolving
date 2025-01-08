
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n, k;
  cin >> n >> k;

  vi ans(n, 0);

  int curr = 1;
  for (int i = k - 1; i < n; i += k) {
    ans[i] = curr;
    curr++;
  }
  for (int i = 0; i < n; i++) {
    if (ans[i] == 0) {
      cout << curr << " ";
      curr++;
    } else {
      cout << ans[i] << " ";
    }
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
