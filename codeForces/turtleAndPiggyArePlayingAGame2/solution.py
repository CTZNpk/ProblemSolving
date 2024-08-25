t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    def sol():
        a.sort(reverse=True)
        return a[(n-1)//2]
    print(sol())
