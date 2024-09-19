t = int(input())

for _ in range(t):
    n = int(input())

    a = list(map(int, input().split()))
    p = list(map(int, input().split()))

    def recurDfs(adj, curr, val):
        if adj[curr] is None and a[curr] < val:
            return False
        if adj[curr] is None:
            return True

        if curr == 0:
            val = max(0, val - a[curr])
        elif a[curr] < val:
            val = min(1e9, val + val - a[curr])

        for u in adj[curr]:
            if not recurDfs(adj, u, val):
                return False
        return True

    def sol():
        adj = [None] * n

        for i in range(n-1):
            if not p[i]-1 in adj:
                adj[p[i]-1] = []
            adj[p[i]-1].append(i+1)

        le = 0
        r = 1e9

        while r - le > 1:
            mid = int((le+r)//2)
            if recurDfs(adj, 0, mid):
                le = mid
            else:
                r = mid
        return le
    print(sol())
