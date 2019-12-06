n = int(input())
s = list(input())
left = 0
for i in range(n):
	word = input()
	right = 0
	for j in word:
		index = left
		while s[index] != j:
			index += 1
		s[index] = '-'
		right = max(right, index)
	print(left + 1, ' ', right + 1, end = ' ')
	left = right + 1
