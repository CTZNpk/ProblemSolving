// #include <bits/stdc++.h>
//
// using namespace std;
//
// #define vi vector<int>
// #define pii pair<int, int>
//
// void sol() {
//   int n, r, m;
//   cin >> n >> r >> m;
//
//   vector<vi> adj(n + 1, vi());
//
//   for (int i = 0; i < r; i++) {
//     int a, b;
//     cin >> a >> b;
//     adj[a].push_back(b);
//     adj[b].push_back(a);
//   }
//
//   vector<pii> guards;
//
//   for (int i = 0; i < m; i++) {
//     int k, s;
//     cin >> k >> s;
//     guards.push_back({k, s});
//   }
//
//   vi visited(n + 1);
//   vi prev(n + 1);
//
//   for (auto &i : guards) {
//     int source = i.first;
//     int dist = i.second;
//     // cout << source << " " << dist << "\n";
//     queue<int> q;
//     q.push(source);
//     prev[source] = -1;
//     q.push(-1);
//     int cnt = 0;
//     while (cnt <= dist) {
//       int u = q.front();
//       // cout << u << " ";
//       q.pop();
//       if (u == -1) {
//         cnt++;
//         if (q.front() == -1) {
//           break;
//         }
//         q.push(-1);
//         continue;
//       }
//       if (visited[u]) {
//         cout << "No\n";
//         return;
//       }
//       visited[u] = true;
//
//       for (int v : adj[u]) {
//         if (!visited[v]) {
//           visited[v] = true;
//           prev[v] = u;
//           q.push(v);
//         }
//       }
//     }
//   }
//
//   cout << "\n";
//   for (int i = 1; i <= n; i++) {
//     // cout << i << " " << visited[i] << "\n";
//     if (visited[i] != 1) {
//       cout << "No\n";
//       return;
//     }
//   }
//   cout << "Yes\n";
// }
//
// int main(int argc, char *argv[]) {
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     sol();
//   }
//
//   return 0;
// }

