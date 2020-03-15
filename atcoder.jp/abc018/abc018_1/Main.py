A = [int(input()) for _ in range(3)]
B = sorted(A)
C = dict(zip(B,[3,2,1]))
for i in range(3):
  print(C[A[i]])