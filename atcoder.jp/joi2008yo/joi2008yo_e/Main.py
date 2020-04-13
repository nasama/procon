R,C = map(int, input().split())
grid = []
for _ in range(R):
    array = list(map(int, input().split()))
    grid.append(array)

maxnum = 0
for bit in range(1 << R):
    S = [0]*R
    for j in range(R):
        if bit & (1 << j):
            S[j] = 1

    sumnum = 0
    for i in range(C):
        one = 0
        for j in range(R):
            if S[j] ^ grid[j][i]:
                one += 1 
        sumnum += max(one, R-one)
    
    maxnum = max(sumnum, maxnum)
print(maxnum)