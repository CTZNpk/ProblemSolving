h, w, q = map(int, input().split())

board = [[True for i in range(w)] for j in range(h)]


count = h * w


def blast(board, r1, c1, dir):
    if board[r1][c1]:
        board[r1][c1] = False
        return -1
    c = 0
    rl = r1 - 1
    rr = r1 + 1
    cd = c1 + 1
    cu = c1 - 1

    while cu != -1 or cd != w or rr != h or rl != -1:
        if cu != -1:
            if board[r1][cu]:
                board[r1][cu] = False
                cu = 0
                c += -1
            cu -= 1
        if cd != w:
            if board[r1][cd]:
                board[r1][cd] = False
                cd = w-1
                c += -1
            cd += 1
        if rl != -1:
            if board[rl][c1]:
                board[rl][c1] = False
                rl = 0
                c += -1
            rl -= 1
        if rr != h:
            if board[rr][c1]:
                board[rr][c1] = False
                rr = h-1
                c += -1
            rr += 1

    return c


for _ in range(q):
    r1, c1 = map(int, input().split())
    count += blast(board, r1-1, c1-1,  0)
print(count)
