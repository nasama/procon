N = int(input())
S = input()
ans = 0
for i in range(1,len(S)):
    cnt = len(set(S[:i]) & set(S[i:]))
    ans = max(ans, cnt)
print(ans)