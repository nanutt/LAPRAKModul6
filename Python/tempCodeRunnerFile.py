hasil=[[0 for i in range(col)] for j in range(batas)]
for i in range(len(matrix1)):
	for j in range(len(matrix1[0])):
		hasil[i][j]=matrix1[i][j]*matrix2[i][j]
print("Matriks AXB")
for i in range(batas):
	for j in range(col):
		print(format(hasil[i][j], "<3"), end=" ")
	print()