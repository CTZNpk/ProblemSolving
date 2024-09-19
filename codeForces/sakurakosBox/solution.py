t = int(input())

for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))

    s = 0

    total = 0
    mod = int(1e9+7)
    for i in range(n):
        s += b[i]
    s %= mod
    for i in range(n):
        s -= b[i]
        total = (total + b[i]*s) % mod

    ans = (total * pow(n * (n - 1) // 2, mod - 2, mod)) % mod
    print(ans)
# for i in range(int(input())):
#     n = int(input())
#     a = list(map(int, input().split()))
#     ans = 0
#     s = 0
#     mod = int(1e9 + 7)
#     for i in range(n):
#         s += a[i]
#     s %= mod
#     for i in range(n):
#         s -= a[i]
#         ans = (ans + a[i] * s) % mod
#     # ans = (ans * pow(n * (n - 1) // 2, mod - 2, mod)) % mod
#     print(ans)
