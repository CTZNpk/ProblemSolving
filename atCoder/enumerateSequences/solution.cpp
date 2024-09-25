#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int sum(vi ans) {
  int s = 0;
  for (int i = 0; i < ans.size(); i++) {
    s += ans[i];
  }
  return s;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  vi elements(n);

  for (auto &i : elements) {
    cin >> i;
  }

  vi ans;

  auto f = [&](int i, auto &&f) -> void {
    if (i == n) {
      if (sum(ans) % k == 0) {
        for (int x : ans)
          cout << x << " ";
        cout << endl;
      }
    } else {
      for (int j = 1; j <= elements[i]; j++) {
        ans.push_back(j);
        f(i + 1, f);
        ans.pop_back();
      }
    }
  };

  f(0, f);

  return 0;
}
