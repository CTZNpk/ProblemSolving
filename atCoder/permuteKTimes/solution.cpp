#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long

vi applyPermutation(vi seq, vi perm) {
  vi newSeq(seq.size());
  for (int i = 0; i < seq.size(); i++) {
    newSeq[i] = seq[perm[i]];
  }
  return newSeq;
}
vi permute(vi seq, vi perm, ll k) {
  while (k > 0) {
    if (k & 1) {
      seq = applyPermutation(seq, perm);
    }
    perm = applyPermutation(perm, perm);
    k >>= 1;
  }
  return seq;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  ll k;
  cin >> n >> k;
  vector<int> x(n);
  for (auto &i : x) {
    cin >> i;
    i--;
  }
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }

  a = permute(a, x, k);
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << " ";
  }

  return 0;
}
