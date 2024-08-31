t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))

    a.sort()

    def query():
        s = input()
        t = []

        if s[0] == '+':
            t.append(1)
        else:
            t.append(-1)
        s = s[2:]
        k, r = map(int, s.split())
        t.append(k)
        t.append(r)

        return t

    def sol(maxi):
        s = query()
        if maxi <= s[2] and maxi >= s[1] and s[0] == 1:
            maxi += 1
        if maxi <= s[2] and maxi >= s[1] and s[0] == -1:
            maxi -= 1
        a[n-1] = maxi
        return maxi
    for _ in range(m):
        print(sol(a[n-1]), end=" ")
    print("")
