n=int(input())
if(n!=0):
    l=list(map(str,input().split()))
    print(' '.join(sorted(l)))
else:
    print("Invalid input")