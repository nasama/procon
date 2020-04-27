X = int(input())
maxnum = 0
for i in range(1, X+1):
    for j in range(2, X+2):
        if i**j > X:
            break
        maxnum = max(maxnum, i**j)
print(maxnum)