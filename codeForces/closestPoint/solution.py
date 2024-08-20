t = int(input())


def sol(n, points):
    if n == 1:
        print("YES")
        return
    if n > 2:
        print("NO")
        return
    if points[1]+1 != points[0] and points[1]-1 != points[0] and points[1] != points[0]:
        print("YES")
        return
    print("NO")
    return


for _ in range(t):
    n = int(input())
    points = list(map(int, input().split()))
    sol(n, points)
