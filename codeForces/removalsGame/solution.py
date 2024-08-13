t = int(input())


def sol(a, b, n):
    flag = True
    for i in range(n):
        if a[i] != b[i]:
            break
        elif i == n-1:
            flag = False

    if flag:
        for i in range(n):
            if a[i] != b[n-i-1]:
                break
            elif i == n-1:
                flag = False

    return flag


for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    if (sol(a, b, n)):
        print("Alice")
    else:
        print("Bob")
