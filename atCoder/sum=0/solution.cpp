#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vll l(n);
  vll r(n);
  vll ans(n);
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    ans[i] = l[i];
    sum += l[i];
  }

  if (sum > 0) {
    cout << "No\n";
  } else {
    int i = 0;
    while (sum < 0) {
      if (i == n) {
        cout << "No\n";
        return 0;
      }
      sum += r[i] - l[i];
      ans[i] = r[i];
      i++;
    }
    i--;
    cout << "Yes\n";
    if (sum > 0) {
      ans[i] -= sum;
    }
    for (auto &i : ans) {
      cout << i << " ";
    }
  }

  return 0;
}
