import bisect

t = int(input())

for _ in range(t):
    n, m, q = map(int, input().split())
    b = list(map(int, input().split()))
    p = map(int, input().split())
    b.sort()

    def sol(n, b, p):
        maxi = max(b)
        mini = min(b)

        if p < mini:
            return mini - 1
        elif p > maxi:
            return n - maxi
        else:
            k = bisect.bisect_left(b, p)
            clLeft = b[k-1]
            cRight = b[k]
            return (cRight - clLeft) // 2
    for i in p:
        print(sol(n, b, i))
