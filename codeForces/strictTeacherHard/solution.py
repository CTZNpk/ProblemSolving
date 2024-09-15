import bisect

t = int(input())

for _ in range(t):
    n, m, q = map(int, input().split())
    b = list(map(int, input().split()))
    p = map(int, input().split())
    b.sort()

    def sol(n, b, p):

        if p < b[0]:
            return b[0] - 1
        elif p > b[-1]:
            return n - b[-1]
        else:
            k = bisect.bisect_left(b, p)
            clLeft = b[k-1]
            cRight = b[k]
            return (cRight - clLeft) // 2
    for i in p:
        print(sol(n, b, i))
