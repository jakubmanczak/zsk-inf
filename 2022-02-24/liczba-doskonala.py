def doskonala(n):
	suma = 0
	for i in range(1, n//2+1):
		if n % i == 0:
			suma += i
	if suma == n:
		return True
	else:
		return False

for i in range(0, 100):
	if doskonala(i):
		print(i)