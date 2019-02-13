n=int(input())
if(n!=0):
  l=list(map(str,input().split()))
  s=' '.join(sorted(l))
  print(s)
else:
  print("Invald input")
