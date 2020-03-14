N = int(input())
L = list(map(int, input().split()))
maxnum = max(L)
L.pop(L.index(max(L)))
if maxnum < sum(L):
  print("Yes")
else:
  print("No")