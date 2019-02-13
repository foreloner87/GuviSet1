n=int(input())
if(n!=0):
    l=list(map(int,input().split()))
    for i in range(len(l)):
        print(l[i],i)
else:
    print("Invalid input")
