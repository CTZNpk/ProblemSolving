#include <bits/stdc++.h>

using namespace std;
template <int MOD, bool isPrime = true> struct ModInt {
  using mint = ModInt;
  static const int mod = MOD;
  int v;

  ModInt(long long _v = 0) {
    if (_v < 0)
      _v += mod;
    if (_v >= mod)
      _v %= mod;
    v = _v;
  }

  mint &operator+=(const mint &o) {
    if ((v += o.v) >= mod)
      v -= mod;
    return *this;
  }
  mint &operator-=(const mint &o) {
    if ((v -= o.v) < 0)
      v += mod;
    return *this;
  }
  mint &operator*=(const mint &o) {
    v = (int)((long long)v * o.v % mod);
    return *this;
  }

  mint pow(long long k) const {
    mint res(1), a(v);
    while (k) {
      if (k & 1)
        res *= a;
      a *= a;
      k >>= 1;
    }
    return res;
  }

  mint inv() const {
    if constexpr (isPrime) {
      return pow(mod - 2);
    } else {
      int x = v, y = mod, u = 1, v = 0;
      while (y != 0) {
        int t = x / y;
        x -= t * y;
        swap(x, y);
        u -= t * v;
        swap(u, v);
      }
      assert(x == 1);
      return u < 0 ? u + mod : u;
    }
  }

  mint operator-() const { return mint(-v); }
  friend mint operator+(mint a, const mint &b) { return a += b; }
  friend mint operator-(mint a, const mint &b) { return a -= b; }
  friend mint operator*(mint a, const mint &b) { return a *= b; }
  friend mint operator/(mint a, const mint &b) { return a *= b.inv(); }
  friend bool operator==(const mint &a, const mint &b) { return a.v == b.v; }
  friend ostream &operator<<(ostream &os, const mint &m) { return os << m.v; }
};

using mint = ModInt<1000000007>;
using vi = vector<mint>;

int main(int argc, char *argv[]) {
  int h, w;
  cin >> h >> w;
  vector<string> board(h);
  for (auto &i : board) {
    cin >> i;
  }
  mint ans = 0;

  vector<vi> dp(h, vi(w, 0));

  dp[h - 1][w - 1] = 1;
  for (int i = h - 1; i >= 0; i--) {
    for (int j = w - 1; j >= 0; j--) {
      if (j != w - 1 && board[i][j + 1] != '#') {
        dp[i][j] += dp[i][j + 1];
      }

      if (i != h - 1 && board[i + 1][j] != '#') {
        dp[i][j] += dp[i + 1][j];
      }
    }
  }
  cout << dp[0][0] << "\n";

  return 0;
}
