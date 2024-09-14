t = int(input())

for _ in range(t):
    n = int(input())

    def sol(n):
        k = (n + 4) // 5
        kCount = n % 5
        if n > 0 and kCount == 0:
            kCount = 5

        s = ""
        li = ['a', 'e', 'i', 'o', 'u']

        for i in range(5):
            if kCount > 0:
                s += k * li[i]
            else:
                s += (k-1) * li[i]
            if len(s) >= n:
                break
            kCount -= 1
        print(s)
    sol(n)
