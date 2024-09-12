n = int(input())

a = []

for i in range(n):
    s = list(map(int, input().split()))
    a.append(s)
cur = 1

for i in range(1, n+1):
    if i <= cur:
        cur = a[cur-1][i-1]
    else:
        cur = a[i-1][cur-1]
print(cur)
