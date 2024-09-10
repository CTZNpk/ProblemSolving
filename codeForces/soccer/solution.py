t = int(input())

for _ in range(t):
    x1, y1 = map(int, input().split())
    x2, y2 = map(int, input().split())

    def sol(x1, y1, x2, y2):
        if x1 > y1:
            temp = x1
            temp2 = x2
            x1 = y1
            x2 = y2
            y1 = temp
            y2 = temp2
        if x2 >= y2:
            print("NO")
        else:
            print("YES")

    sol(x1, y1, x2, y2)
