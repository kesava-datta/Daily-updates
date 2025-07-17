n = int(input())
a = list(map(int,input().split()))
for i in range(n-1):
    for j in range(i+1,n):
        if a[i]<a[j]:
            a[i],a[j]=a[j],a[i]
a = list(dict.fromkeys(a))
print(a[1])    
