a = int( input("Podaj liczbę do rozłożenia: ") )

while True:
	if not(a):
		break
	print(int(a % 10))
	a = int(a / 10)