A, B = map(int, input().split())
if A*B%3==0 or (A+B)%3==0:
  print("Possible")
else:
  print("Impossible")