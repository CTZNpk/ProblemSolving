t = int(input())

for _ in range(t):
    n, m, q = map(int, input().split())
    b = list(map(int, input().split()))
    p = int(input())

    def sol(n, b, p):
        maxi = max(b)
        mini = min(b)

        if p < mini:
            return mini - 1
        elif p > maxi:
            return n - maxi
        else:
            return (maxi - mini) // 2
    print(sol(n, b, p))
