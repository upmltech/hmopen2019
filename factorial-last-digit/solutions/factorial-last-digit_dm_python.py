n = int(input())
delta = 0
factorial = 1
for i in range(1, n + 1):
	temp = i
	while temp % 2 == 0:
		temp = temp // 2
		delta += 1
	while temp % 5 == 0:
		temp = temp // 5;
		delta -= 1
	factorial *= temp
	factorial %= 10
for i in range(delta):
	factorial *= 2
	factorial %= 10
print(factorial)
