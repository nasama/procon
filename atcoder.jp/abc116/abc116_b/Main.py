s = int(input())
d = set([s])
for i in range(2,1000000):
  if s%2==0:
    s//=2
  else:
    s=3*s+1
  if s in d:
    print(i)
    break
  else:
    d.add(s)