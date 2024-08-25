t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    def sol():
        return s[0] == s[n-1]
    if (sol()):
        print("NO")
    else:
        print("YES")
