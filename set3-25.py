n=int(input())
if(n!=0):
  l=list(map(int,input().split()))
  l=sorted(l)
  print(l[(len(l)//2)])
else:
  print("Invalid input")
