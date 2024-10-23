
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define si set<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  si ind;
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    ind.insert(k - 1);
  }
  string c;
  cin >> c;
  sort(all(c));
  int k = 0;
  for (auto &i : ind) {
    s[i] = c[k];
    k++;
  }
  cout << s << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }
  return 0;
}
