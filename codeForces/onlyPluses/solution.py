t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    def sol(a, b, c):
        for i in range(5):
            mini = min(a, b, c)
            if mini == a:
                a += 1
            elif mini == b:
                b += 1
            else:
                c += 1
        print(a*b*c)
    sol(a, b, c)
