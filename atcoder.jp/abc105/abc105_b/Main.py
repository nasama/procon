N = int(input())
flag = False
for i in range(26):
    for j in range(15):
        if i*4 + j*7 == N:
            flag = True

if flag:
    print("Yes")
else:
    print("No")