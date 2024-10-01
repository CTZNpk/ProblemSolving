#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>

int main(int argc, char *argv[]) {
  int n, t, p;
  cin >> n >> t >> p;
  vi l(n);
  for (auto &i : l) {
    cin >> i;
  }
  sort(all(l));

  int val = l[n - p];
  if (val > t) {
    cout << 0;
  } else {
    cout << t - val;
  }

  return 0;
}
