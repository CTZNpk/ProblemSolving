def sol(m, k, waters):
    current_pos = -1

    if m >= len(waters):
        return True

    return recur(False, current_pos, m, k, waters)


def recur(inWater, cur_pos, jump, swim, waters):

    if swim < 0:
        return False

    if cur_pos >= len(waters):
        return True

    if not cur_pos == -1 and waters[cur_pos] == 'C':
        return False

    if not inWater:
        if cur_pos + jump >= len(waters):
            return True
        for k in range(cur_pos + jump, cur_pos, -1):
            if waters[k] == 'L':
                return recur(False, k, jump, swim, waters)
        return recur(True, cur_pos + jump, jump, swim, waters)
    if waters[cur_pos] == 'L':
        return recur(False, cur_pos, jump, swim, waters)
    return recur(True, cur_pos+1, jump, swim - 1, waters)


n = int(input())

for _ in range(n):
    n, m, k = map(int, input().split())
    waters = input()
    if sol(m, k, waters):
        print("YES")
    else:
        print("NO")
