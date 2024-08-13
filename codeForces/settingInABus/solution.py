t = int(input())


def sol(a, n):
    availRight = a[0] + 1
    availLeft = a[0] - 1

    for i in range(1, n):
        if a[i] == availLeft:
            availLeft -= 1
        elif a[i] == availRight:
            availRight += 1
        else:
            return False
    return True


for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    if sol(a, n):
        print("YES")
    else:
        print("NO")
