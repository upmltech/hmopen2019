n = int(input())
for i in range(n + 1, 2 * n):
	j = 2
	while j * j <= i:
	    if i % j == 0:
	        break
	    j += 1
	else:
	    print('YES')
	    print(i)
	    exit()
print('NO')
