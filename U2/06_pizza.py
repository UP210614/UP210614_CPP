
from ast import match_case


pizza = input("¿Quiere una pizza vegetariana Y/N? ")

while pizza != 'Y' and pizza != "N":
    pizza = input("¿Quiere una pizza vegetariana Y/N? ")

if pizza == 'Y':

    print("\nMenú de ingredientes (solo puede escoger uno): ")
    print("1. Pimiento.")
    print("2. Tofú.")
    opcion = int(input("\nIngrese el número de su ingrediente: "))

    match opcion:
        case 1:
            ingrediente = 'pimiento'
        case 2:
            ingrediente = 'tofú'
        case _:
            print("\nEsa opción no es válida.")
    
    print("\nSu pizza es vegetariana, los ingredientes son: mozzarella, tomate y {}.".format(ingrediente))
else:
    print("\nMenú de ingredientes (solo puede escoger uno): ")
    print("1. Pepperoni.")
    print("2. Jamón.")
    print("3. Salmón.")
    opcion = int(input("\nIngrese el número de su ingrediente: "))

    match opcion:
        case 1:
            ingrediente = 'pepperoni'
        case 2:
            ingrediente = 'jamón'
        case 3:
            ingrediente = 'salmón'
        case _:
            print("\nEsa opción no existe.")
    print("\nSu pizza no es vegetariana, los ingredientes son: mozzarella, tomate y {}.".format(ingrediente))
