t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    has = 0
    count = 0
    for i in range(n):
        if a[i] >= k:
            has += a[i]
        if has and a[i] == 0:
            count += 1
            has -= 1
    print(count)
