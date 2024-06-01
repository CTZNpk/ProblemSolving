def sol(a, b, c, d):
    minf = min(a, b)
    maxf = max(a, b)
    mins = min(c, d)
    maxs = max(c, d)
    if mins < minf and maxs < maxf and maxs > minf:
        print("YES")
    elif mins > minf and mins < maxf and maxs > maxf:
        print("YES")
    else:
        print("NO")


n = int(input())

for _ in range(n):
    a, b, c, d = map(int, input().split())
    sol(a, b, c, d)
