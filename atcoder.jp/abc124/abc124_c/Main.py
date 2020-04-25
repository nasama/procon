S = input()
count1 = 0
count2 = 0
for i in range(len(S)):
    if i%2:
        if S[i] == '0':
            count1 += 1
        else:
            count2 += 1
    else:
        if S[i] == '1':
            count1 += 1
        else:
            count2 += 1
print(min(count1, count2))