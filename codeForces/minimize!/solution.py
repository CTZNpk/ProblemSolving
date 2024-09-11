t = int(input())

for _ in range(t):
    a, b = map(int, input().split())

    def sol(a, b):
        c = a+b/2
        return int((c-a)+(b-c))
    print(sol(a, b))
