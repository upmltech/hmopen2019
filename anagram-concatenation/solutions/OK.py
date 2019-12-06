n = int(input())
s = list(input())
alphabet = list(0 for i in range(26))
left = 0
for i in range(n):
	word = input()
	right = left
	count = 0
	for j in word:
		alphabet[ord(j) - ord('a')] += 1
		count += 1
	while count > 0:
	    if alphabet[ord(s[right]) - ord('a')] > 0:
	        alphabet[ord(s[right]) - ord('a')] -= 1
	        count -=1
	    right += 1
	print(left + 1, ' ', right, end= ' ')
	left = right
