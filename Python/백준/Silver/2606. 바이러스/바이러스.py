from sys import stdin
from collections import deque

com = int(stdin.readline())
compair = int(stdin.readline())

graph = [[] for i in range(com + 1)]
visited = [0] * (com + 1)

for i in range(compair):
    com1, com2 = map(int, stdin.readline().split())
    graph[com1] += [com2]
    graph[com2] += [com1]
    
visited[1] = 1
queue = deque([1])

while queue:
    virus = queue.popleft()
    for nv in graph[virus]:
        if visited[nv] == 0:
            queue.append(nv)
            visited[nv] = 1
            
print(sum(visited)-1)