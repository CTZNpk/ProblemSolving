#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vi wordLen;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    wordLen.push_back(s.length());
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cnt += wordLen[i];
    if (cnt > m) {
      cout << i << "\n";
      return;
    }
  }
  cout << n << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
  return 0;
}
