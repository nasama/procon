import collections
w = input()
d = collections.defaultdict(int)
for i in range(len(w)):
  d[w[i]]+=1
ans = 'Yes'
for v in d.values():
  if v%2!=0:
    ans = 'No'
    break
print(ans)