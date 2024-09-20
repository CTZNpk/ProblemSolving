import sys
t = int(input())


def query(s):
    print("? "+s)
    sys.stdout.flush()
    ans = int(input())
    return ans


def predict(s):
    print("! "+s)


for _ in range(t):
    n = int(input())

    check = '0'
    suff = False
    for _ in range(2 * n):
        if not query(check):
            if not suff:
                k = check[-1]
                check = check.removesuffix(k)

                if k == '0':
                    check = check + '1'
                else:
                    suff = True
                    if check[0] == '0':
                        check = '1'+check
                    else:
                        check = '0'+check
            else:
                k = check[0]
                check = check.removeprefix(check[0])
                if k == '0':
                    check = '1'+check
        else:
            if len(check) == n:
                predict(check)
                break
            if not suff:
                check += '0'
            else:
                check = '0' + check
