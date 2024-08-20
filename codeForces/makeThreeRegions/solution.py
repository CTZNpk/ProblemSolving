t = int(input())

for _ in range(t):
    n = int(input())

    f = input()
    s = input()

    def sol(f, s, n):
        count = 0

        for i in range(1, n-1):
            if s[i-1] == '.' and s[i+1] == '.' and s[i] == '.' and f[i] == '.':
                if f[i-1] == 'x' and f[i+1] == 'x':
                    count += 1
            if f[i-1] == '.' and f[i+1] == '.' and f[i] == '.' and s[i] == '.':
                if s[i-1] == 'x' and s[i+1] == 'x':
                    count += 1
        return count
    print(sol(f, s, n))
