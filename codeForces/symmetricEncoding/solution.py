t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    p = sorted(s)
    k = ""

    def sol(s, p, n):
        hashMap = {}
        i = 0
        j = n-1
        while i <= j:
            hashMap[p[i]] = p[j]
            hashMap[p[j]] = p[i]
            i += 1
            j -= 1
            while i < n and p[i-1] == p[i]:
                i += 1

            while j >= 0 and p[j+1] == p[j]:
                j -= 1

        ans = ""
        for i in s:
            ans += hashMap[i]
        print(ans)
    sol(s, p, n)
