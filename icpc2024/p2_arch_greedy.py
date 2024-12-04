def solve(line):
    s = list(line)
    n = len(s)

    moves = 0

    a = 0
    b = n - 1

    while a < b:
        if s[a] != s[b]:
            temp_b = b
            while temp_b > a and s[temp_b] != s[a]:
                temp_b -= 1

            if temp_b == a:
                sa = a
                sb = a + 1
                s[sa], s[sb] = s[sb], s[sa]
                moves += 1
            else:
                for i in range(temp_b, b):
                    s[i], s[i + 1] = s[i + 1], s[i]
                    moves += 1
        a += 1
        b -= 1

    return moves


# t = int(input())
# for _ in range(t):
#     line = input()
#     print(solve(line))

print(solve("aabcaca"))
# print(solve("ppp"))
# print(solve("eggeekgbbeg"))
# print(solve("letelt"))
