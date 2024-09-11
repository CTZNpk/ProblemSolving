t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    def values(m, k):
        vl = m * (2*k + m-1) // 2
        vt = n * (2 * k + n - 1)//2
        return vl, vt - vl

    def sol(n, k):
        lo = 1
        hi = n
        cur = 1
        while lo <= hi:
            mid = (hi + lo) // 2
            a, b = values(mid, k)
            if a < b:
                lo = mid + 1
                cur = mid
            else:
                hi = mid - 1
        a, b = values(cur, k)
        c, d = values(cur+1, k)
        return min(b-a, c-d)
    print(int(sol(n, k)))
