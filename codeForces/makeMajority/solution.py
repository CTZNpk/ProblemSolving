t = int(input())

for _ in range(t):
    n = int(input())
    a = input()

    def sol(n, a):
        c0 = 0
        c1 = 0
        islands = 0
        prevOne = True
        for i in range(n):
            if int(a[i]) == 0:
                c0 += 1
                if prevOne:
                    islands += 1
                prevOne = False
            else:
                c1 += 1
                prevOne = True
        if c1 > c0 or c1 > islands:
            print("YES")
            return
        print("NO")

    sol(n, a)
