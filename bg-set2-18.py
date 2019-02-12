def arms(x,y):
    for i in range(x+1,y):
        l=list(str(i))
        sum=0
        for j in range(len(l)):
            sum+=(int(l[j])**3)
        if(sum==i):
            print(i)
a,b=input().split()
a,b=int(a),int(b)
arms(a,b)
