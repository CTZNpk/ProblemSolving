#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  if (n % 2) {
    cout << "No\n";
    return;
  } else {
    string s = "";
    for (int i = 0; i < n / 2; i++) {
      int t = 3;
      while (t--) {
        s += "A";
      }
      s += "B";
    }
    cout << "YES\n";
    cout << s << "\n";
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
