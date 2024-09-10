t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()

    poly = 0
    cur = 1
    curE = a[0]
    for i in range(1, n):
        if a[i] == a[i-1]:
            cur += 1
            if cur == 3:
                cur = 0
                poly += 1
        else:
            cur = 1
            curE = a[i]

    print(poly)
