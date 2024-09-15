def encode(strs: str) -> str:
    ans = ""
    for i in strs:
        ans += str(len(i))
        ans += "#"
        ans += i
    return ans


def decode(s: str) -> [str]:
    ans = []
    currLen = ""
    cLen = True
    i = 0
    while i < len(s):
        if cLen:
            if s[i] != '#':
                currLen += s[i]
            else:
                cLen = False
        else:
            cL = int(currLen)
            ans.append(s[i:i+cL])
            i += cL - 1
            cLen = True
            currLen = ""
        i += 1
    if not cLen:
        ans.append("")
    return ans


t = encode([""])
print(t)
p = decode(t)
print(p)
