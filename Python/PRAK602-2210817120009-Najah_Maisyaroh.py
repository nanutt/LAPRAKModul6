batas=int(input())
matrix1=list(map(int, input().split()))
for i in range(batas):
	print((i+1)* matrix1[i], end=" ")
print()