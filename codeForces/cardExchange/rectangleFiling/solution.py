t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    v = []
    for _ in range(n):
        s = input()
        v.append(s)

    def sol(v, n, m):
        if v[0][0] == v[n-1][m-1]:
            return True
        if v[0][m-1] == v[n-1][0]:
            return True
        ftl = v[0][0] == 'W'
        ftr = v[0][m-1] == 'W'
        fbl = v[n-1][0] == 'W'
        fbr = v[n-1][m-1] == 'W'

        if ftl == ftr or fbl == fbr:
            for i in range(1, m-1):
                if ftl and ftr and v[0][i] == 'B':
                    return True
                if not ftl and not ftr and v[0][i] == 'W':
                    return True

                if fbl and fbr and v[n-1][i] == 'B':
                    return True
                if not fbl and not fbr and v[n-1][i] == 'W':
                    return True

        if ftl == fbl or ftr == fbr:
            for i in range(1, n-1):

                if ftl and fbl and v[i][0] == 'B':
                    return True
                if not ftl and not fbl and v[i][0] == 'W':
                    return True

                if fbr and ftr and v[i][m-1] == 'B':
                    return True
                if not fbr and not ftr and v[i][m-1] == 'W':
                    return True
        return False
    if sol(v, n, m):
        print("YES")
    else:
        print("NO")
