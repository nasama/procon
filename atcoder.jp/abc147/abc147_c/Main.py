def judge(bit):
    for i in range(N):
        if not(bit & (1 << i)):
            continue
        for xy in v[i]:
            x = xy[0] 
            y = xy[1]
            if y == 1 and not(bit & (1 << x)):
                return False
            if y == 0 and (bit & (1 << x)):
                return False
    return True

N = int(input())
v = []
for i in range(N):
    A = int(input())
    array = []
    for i in range(A):
        a,b = map(int, input().split())
        a-=1 
        array.append((a,b))
    v.append(array)

res = 0
for bit in range(1 << N):
    if judge(bit):
        count = bin(bit).count("1")
        res = max(res, count)
    
print(res)