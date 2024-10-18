
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, q;
  cin >> n >> q;
  vll c(n);
  vi count1s(n);
  vll comm(n);
  int k = 0;
  for (auto &i : c) {
    cin >> i;
    if (k != 0) {
      count1s[k] = count1s[k - 1] + (i == 1);
    } else {
      count1s[k] = i == 1;
    }
    if (k == 0) {
      comm[k] = i;
    } else {
      comm[k] = comm[k - 1] + i;
    }
    k++;
  }
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    int oneInRange = count1s[r];
    ll sum = comm[r];
    if (l > 0) {
      sum -= comm[l - 1];
      oneInRange -= count1s[l - 1];
    }
    int len = r - l + 1;
    if (len != 1 && len + oneInRange <= sum) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
