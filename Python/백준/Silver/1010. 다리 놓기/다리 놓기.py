import math

T = int(input())

for _ in range(T):
    N, M = map(int, input().split())
    bridge = math.factorial(M) // (math.factorial(N) * math.factorial(M - N))
    print(bridge)