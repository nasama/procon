X = int(input())
flag = False
for A in range(0,1000):
    for B in range(-1000, 1000):
        if A**5 - B**5 == X:
            print(A,B)
            flag = True
            break
    if flag: 
        break