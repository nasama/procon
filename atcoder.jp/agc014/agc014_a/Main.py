A, B, C = map(int, input().split())
count = 0
fA = A
fB = B
while A%2 == 0 and B%2 == 0 and C%2 == 0:
    hA = A/2
    hB = B/2
    hC = C/2
    A = hB + hC
    B = hA + hC
    C = hA + hB
    count += 1
    if A == fA and B == fB:
        count = -1 
        break

print(count)