t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    sum = 0
    for i in range(n-2):
        sum += a[i]

    a[-2] -= sum
    a[-1] -= a[-2]
    print(a[-1])
