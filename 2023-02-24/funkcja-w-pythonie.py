def dzielniki(liczba):
	array = []
	for i in range(1, liczba):
		if liczba % i == 0:
			array.append(i)
	return array


print(dzielniki(150))