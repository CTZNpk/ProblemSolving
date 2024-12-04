from collections import deque, defaultdict


def tree_properties(v, adj):

    # SIMPLE BFS
    def bfs(st):
        vis = [-1 for _ in range(v)]
        q = deque([(st, 0)])
        vis[st] = 0
        farthest, max_dist = st, 0
        while q:
            node, dist = q.popleft()
            for u in adj[node]:
                if vis[u] == -1:
                    vis[u] = dist + 1
                    q.append((u, dist + 1))
                    if dist + 1 > max_dist:
                        farthest, max_dist = u, dist + 1
        return farthest, max_dist

    n, _ = bfs(0)
    _, depth = bfs(n)

    conn = {node: len(adj[node]) for node in range(v)}
    conn = sorted(conn.values(), reverse=True)
    hi = conn[0]

    if len(conn) > 1:
        sec = conn[1]
    else:
        sec = conn[0]

    print(f"{depth} {hi} {sec}")


"""
1
5
0 1
0 2
0 3
0 4
"""
tt = int(input())

for _ in range(tt):
    v = int(input())
    adj = defaultdict(list)
    for _ in range(v-1):
        a, b = map(int, input().split())
        adj[a].append(b)
        adj[b].append(a)

    tree_properties(v, adj)
