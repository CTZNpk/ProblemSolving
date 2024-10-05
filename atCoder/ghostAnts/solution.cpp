#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define all(a) a.begin(), a.end()

int main(int argc, char *argv[]) {
  ll n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  vll left;
  vll right;
  for (int i = 0; i < n; i++) {
    ll k;
    cin >> k;
    if (s[i] == '1') {
      right.pb(k);
    } else {
      left.pb(k);
    }
  }
  sort(all(right));
  sort(all(left));

  t *= 2;
  ll count = 0;
  int currL = 0;
  int leftL = 0;
  ll countInter = 0;

  for (int i = 0; i < right.size(); i++) {
    while (leftL < left.size() && left[leftL] < right[i]) {
      leftL++;
      countInter--;
    }
    if (currL < leftL) {
      currL = leftL;
      countInter = 0;
    }
    while (currL < left.size() && abs(left[currL] - right[i]) <= t) {
      currL++;
      countInter++;
    }
    count += countInter;
  }
  cout << count;

  return 0;
}
