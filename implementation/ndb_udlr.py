'''
2021.06.16. 상하좌우
'''
import sys
sys.stdin = open("../input.txt", "r")

n = int(input())
data = input().split()

dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
move_types = ['L', 'R', 'U', 'D']
x, y = 1, 1

for d in data:
    for i in range(len(move_types)):
        if d == move_types[i]:
            nx = x + dx[i]
            ny = y + dy[i]
    if nx < 1 or ny < 1 or nx > n or ny > n:
        continue
    x, y = nx, ny
print(x, y)

