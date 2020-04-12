m = int(input())
A = [tuple(map(int, input().split())) for _ in range(m)]
n = int(input())
B = [tuple(map(int, input().split())) for _ in range(n)]
set_b = set(B)
flag = True
for (bx,by) in set_b:
    flag = True
    for i, (ax,ay) in enumerate(A):
        dx = bx-ax
        dy = by-ay
        for j, (x,y) in enumerate(A):
            if not (x+dx,y+dy) in set_b:
                flag = False
                break
        if flag:
            print(dx,dy)
        break