def cantor(s, n):
    if n == 1:
        return
    
    for i in range(s + n // 3, s + (n // 3) * 2):
        res[i] = ' '
    
    cantor(s, n // 3)
    cantor(s + n // 3 * 2, n // 3)

from sys import stdin
while True:
    try:
        N = int(stdin.readline())
        res = ['-'] * (3 ** N)
        cantor(0, 3 ** N)
        print(''.join(res))
    except:
        break