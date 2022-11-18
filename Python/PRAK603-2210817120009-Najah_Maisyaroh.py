batas1, batas2=map(int,input().split())
if(batas1!=batas2):
	print("Jumlah tidak sama")
else:
	matrix1=list(map(int, input().split()))
	matrix2=list(map(int, input().split()))
	for i in range(batas1):
		print(matrix1[i]*matrix2[i], end=" ")
	print()