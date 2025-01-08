

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  string s;
  cin >> s;
  int idxFirstZero = -1;
  bool nxtOne = true;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '0') {
      idxFirstZero = i;
      if (i != s.length() - 1) {
        nxtOne = s[i + 1] == '1';
      }
      break;
    }
  }

  cout << 1 << " " << s.length() << " ";
  if (idxFirstZero == -1) {
    cout << s.length() << " " << s.length() << "\n";
  } else {
    int len = s.length() - idxFirstZero;
    string num;
    num = s.substr(idxFirstZero, len);
    int mxNmt = 0;
    int idxNmt = -1;
    for (int i = idxFirstZero - 1; i >= 0; i--) {
      int nmt = 0;
      for (int j = i; j < i + len; j++) {
        int numIdx = j - i;
        if (s[j] != num[numIdx]) {
          nmt++;
        } else {
          break;
        }
      }
      if (nmt > mxNmt) {
        mxNmt = nmt;
        idxNmt = i;
      }
    }
    cout << idxNmt + 1 << " " << idxNmt + len << "\n";
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
