L = list(map(int, input().split()))
L.sort()
if L[0] == L[1] == L[2]:
  print(L[0])
elif L[0] == L[1]:
  print(L[2])
else:
  print(L[0])