a, b, c = input().split()

if a == '<' and b == '<' and c == '<':
    print('B')
elif a == '<' and b == '<' and c == '>':
    print('C')
elif a == '<' and b == '>':
    print('A')
elif a == '>' and b == '<':
    print('A')
elif a == '>' and b == '>' and c == '<':
    print('C')
elif a == '>' and b == '>' and c == '>':
    print('B')