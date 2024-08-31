t = int(input())

for _ in range(t):
    l, r = map(int, input().split())

    def sol(l, r):
        ans = 0
        # while l < r and l < 20:
        #     if l % 10 == 0 or l % 10 == 1:
        #         break
        #     else:
        #         l += 4
        #         if l <= r:
        #             ans += 1
        # if diff == 2 and r == 3:

        diff = r - l + 1
        if diff >= 3 and l % 2:
            ans += 1
            diff -= 3
            diff = max(0, diff)

        ans += diff//4

        print(ans)
    sol(l, r)
