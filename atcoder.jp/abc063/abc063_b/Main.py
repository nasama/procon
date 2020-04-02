S = input()
a = set()
ans = 'yes'
for i in S:
    if i in a:
        ans = 'no'
        break
    else:
        a.add(i)
print(ans)