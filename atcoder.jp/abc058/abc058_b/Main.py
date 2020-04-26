O = input()
E = input()
ans = ''
l1 = len(O)
l2 = len(E)
for i in range(l2):
    ans += O[i]
    ans += E[i]
if l1 > l2:
    ans += O[-1]
print(ans)