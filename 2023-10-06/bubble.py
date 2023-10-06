import random

def bubblesort(a):
  for z in range(0, len(a) - 1):
    for i in range(0, len(a) - 1):
      if a[i] > a[i+1]:
        a[i], a[i+1] = a[i+1], a[i]
  return a

if __name__ == "__main__":
  print("Podaj ilość liczb do uszeregowania: ")
  amount = int(input())
  array = []
  choice = 0

  while choice != 1 and choice != 2:
    print("Wpisać wartości ręcznie czy wygenerować losowo?")
    print("Podaj 1 by wpisać, 2 by wylosować: ")
    choice = int(input())
    if choice == 1:
      for i in range(0, amount):
        print(f"Podaj wartość elementu o indeksie {i}: ")
        array.append(int(input()))
    elif choice == 2:
      for i in range(0, amount):
        array.append(random.randint(0, 999))
    else:
      print("Niepoprawny wybór.")

  print("\nWartości tablicy (przed sortowaniem)")
  for i in range(0, amount):
    print(f"{array[i]} ")

  array = bubblesort(array)

  print("\nWartości tablicy (po sortowaniu)")
  for i in range(0, amount):
    print(f"{array[i]} ")