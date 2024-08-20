t = int(input())

for i in range(t):
    s = input()

    def sol(s):
        split = False
        for i in range(1, len(s)):
            if s[i-1] == s[i]:
                cur = ord(s[i])
                if cur == ord('z'):
                    cur -= 1
                else:
                    cur += 1
                s = s[:i] + chr(cur) + s[i:len(s)]
                split = True
                break
        if not split:
            cur = ord(s[len(s)-1])
            if cur == ord('z'):
                cur -= 1
            else:
                cur += 1
            s += chr(cur)
        return s
    print(sol(s))
