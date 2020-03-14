x, y = map(int, input().split())
list1 = [1,3,5,7,8,10,12,4,6,9,11,2]
list2 = [0,0,0,0,0,0,0,1,1,1,1,2]
d = dict(zip(list1, list2))
if d[x] == d[y]:
  print("Yes")
else:
  print("No")