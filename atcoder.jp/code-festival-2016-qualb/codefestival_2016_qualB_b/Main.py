N, A, B = map(int, input().split())
S = input()
count_a = 0
count_b = 0
for i in range(N):
    if S[i] == 'a':
        if count_a+count_b < A+B:
            count_a+=1
            print('Yes')
        else:
            print('No')
    elif S[i] == 'b':
        if count_a+count_b < A+B and count_b < B:
            count_b+=1
            print('Yes')
        else:
            print('No')   
    else:
        print('No')    