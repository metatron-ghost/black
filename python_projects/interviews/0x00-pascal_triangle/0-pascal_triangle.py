def pascal_triangle(n):
	L = []
	K = []
	count = 0
	if (n < 0) or (n == 0):
		return(L)
	else:
		for i in range(n):
			for j in range(count + 1):
				if (j == 0) or (j == count):
					L.append(1)
				else:
					L.append(((K[i-1][j-1])+(K[i-1][j])))
			count = count + 1
			K.append(L)   
			L = []
	return(K)
