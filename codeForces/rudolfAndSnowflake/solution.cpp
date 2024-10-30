#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>

const int N = 1e6;

vi p(N, 0);
void sol() {
  int n;
  cin >> n;
  if (p[n] != 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main(int argc, char *argv[]) {
  for (int i = 2;; i++) {
    ll tot = 1 + i + i * i;
    ll x = i * i;
    if (tot > N) {
      break;
    }

    while (tot <= N) {
      p[tot] = 1;
      x *= i;
      tot += x;
    }
  }

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
