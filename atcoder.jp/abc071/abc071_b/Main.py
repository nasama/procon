S = input()
flag = True
for i in range(26):
    if not chr(ord('a') + i) in S:
        print(chr(ord('a') + i))
        flag = False
        break
if flag:
    print('None')