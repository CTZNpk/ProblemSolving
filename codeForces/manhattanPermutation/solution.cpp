#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, m;
  cin >> n >> m;
  if (m % 2) {
    cout << "No\n";
    return;
  }
  ll k = (n / 2) * (n / 2) * 2;
  if (n % 2 == 0) {
    if (m > k) {
      cout << "No\n";
      return;
    }
  } else {
    if (m > k + n - 1) {
      cout << "No\n";
      return;
    }
  }

  vi perm(n);
  iota(all(perm), 1);

  int l = 0, r = n - 1;
  while (m > 0) {
    ll diff = m - (r - l) * 2;
    if (diff >= 0) {
      swap(perm[l], perm[r]);
      r--, l++;
      m = diff;
    } else {
      diff /= 2;
      r += diff;
      swap(perm[l], perm[r]);
      break;
    }
  }
  cout << "Yes\n";
  for (auto &i : perm) {
    cout << i << " ";
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
