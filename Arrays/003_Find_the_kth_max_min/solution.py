l = list(map(int,input().split()))
k = int(input())
l.sort()
print(l[k-1],l[-k])