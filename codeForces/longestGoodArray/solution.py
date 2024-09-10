import math
t = int(input())

for _ in range(t):
    l, r = map(int, input().split())

    r = r - l + 1

    def sol(r):
        r *= 2
        ans = round(math.sqrt(r))

        return ans
    print(sol(r))
