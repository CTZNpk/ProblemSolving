# import math
#
# t = int(input())
#
# for _ in range(t):
#     l, r = map(int, input().split())
#     pow = math.floor(math.log(l, 3))
#     prev = 3 ** pow
#     pow += 1
#     steps = pow * 2
#     next = 3 * prev
#     while next <= r:
#         steps += (next - max(prev, l+1)) * pow
#         prev = next
#         next *= 3
#         pow += 1
#     steps += (r-max(prev-1, l)) * pow
#     print(steps)
