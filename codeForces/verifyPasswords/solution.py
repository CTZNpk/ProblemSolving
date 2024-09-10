t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    def sol(n, s):
        f = False
        for i in range(n):
            if f:
                if ord(s[i]) < 97:
                    return False
            else:
                if ord(s[i]) >= 97:
                    f = True
            if i == 0:
                continue
            if s[i-1] > s[i]:
                return False
        return True
    print("YES"if sol(n, s)else "NO")
