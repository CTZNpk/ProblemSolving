from itertools import permutations

GENRE_NAMES = ['S', 'F', 'H']

def perm_str(perm):
    return ''.join(GENRE_NAMES[genre] for genre in perm)

def solve(S1, F1, H1, S2, F2, H2, S3, F3, H3):
    TS = S1 + S2 + S3
    TF = F1 + F2 + F3
    TH = H1 + H2 + H3

    def get_genre_total(genre_idx):
        if genre_idx == 0:
            return TS

        if genre_idx == 1:
            return TF

        if genre_idx == 2:
            return TH

    stacks = [
        (S1, F1, H1),
        (S2, F2, H2),
        (S3, F3, H3), 
    ]

    genres = [0, 1, 2]
    min_moves = float('inf')
    min_perm = None

    def is_move_better(moves, perm):
        if moves > min_moves:
            return False

        if moves < min_moves:
            return True

        # moves == min_moves: compare alphabats

        return perm_str(perm) < perm_str(min_perm)


    for perm in permutations(genres):
        moves = 0

        for stack_idx, genre in enumerate(perm):
            genre_total = get_genre_total(genre)
            moves += genre_total - stacks[stack_idx][genre] 

        if is_move_better(moves, perm):
            min_moves = moves
            min_perm = perm
    
    print(f"{perm_str(min_perm)} {min_moves}")


t = int(input())
for _  in range(t):
    line = list(map(int, input().split()))
    [S1, F1, H1, S2, F2, H2, S3, F3, H3] = line
    solve(
        S1, F1, H1,
        S2, F2, H2,
        S3, F3, H3
    )

"""
2
1 1 2 3 5 8 10 3 7
4 4 4 4 4 4 4 4 4
"""

# S1 F1 H1 S2 F2 H2 S3 F3 H3

"""
S1, F1, H1 = 1, 1, 2
S2, F2, H2 = 3, 5, 8
S3, F3, H3 = 10, 3, 7


solve(
    S1, F1, H1,
    S2, F2, H2,
    S3, F3, H3
)

S1, F1, H1 = 4, 4, 4
S2, F2, H2 = 4, 4, 4
S3, F3, H3 = 4, 4, 4

solve(
    S1, F1, H1,
    S2, F2, H2,
    S3, F3, H3
)
"""