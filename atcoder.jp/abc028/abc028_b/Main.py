S = input()
ans = [0]*6
for i in range(6):
    ans[i] = S.count(chr(ord('A')+i))
print(*ans)