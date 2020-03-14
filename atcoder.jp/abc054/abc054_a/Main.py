A, B = map(int, input().split())
if A!=1 and B!=1:
  if A > B:
    print("Alice")
  elif B > A:
    print("Bob")
  else:
    print("Draw")

else:
  if A==1 and B==1:
    print("Draw")
  elif A==1:
    print("Alice")
  else:
    print("Bob")