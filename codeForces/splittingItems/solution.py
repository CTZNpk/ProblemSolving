t = int(input())


def sol(n, k, a):
    a.sort()
    for i in range(n-2, -1, -2):
        mini = min(k, a[i+1] - a[i])
        a[i] += mini
        k -= mini

    diff = a[n-1]
    me = True
    for i in range(n-2, -1, -1):
        if me:
            diff -= a[i]
            me = False
        else:
            diff += a[i]
            me = True

    return diff


for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    print(sol(n, k, a))
