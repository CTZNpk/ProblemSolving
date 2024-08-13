t = int(input())


def sol(n, m, k):
    colors = 0
    if k >= m:
        colors = m
    else:
        colors = k
    if k > n:
        colors *= n
    else:
        colors *= k
    return colors


for _ in range(t):
    n, m, k = map(int, input().split())
    print(sol(n, m, k))
