i = 1

while i != 0:
    print("\n")
    print("Calculadora:")
    print("1.Suma")
    print("2.Resta")
    print("3.Multiplicación")
    print("4.División")

    opcion = float(input("Escoja una opción: "))
    while opcion != 1 and opcion != 2 and opcion != 3 and opcion != 4:
        opcion = float(input("Escoja una opción: "))

    num_a = float(input("Ingrese su primer número: "))
    num_b = float(input("Ingrese su segundo número: "))
    if(opcion == 4):
        while num_b == 0:
            print("\nNo se puede dividir entre 0.")
            num_b = float(input("Ingrese su segundo número: "))

    r = 0

    match opcion:
        case 1:
            r = num_a + num_b
        case 2:
            r = num_a - num_b
        case 3:
            r = num_a * num_b
        case 4: 
            r = num_a / num_b

    print("Su resultado es = {}".format(r))
    print("Continuar:")
    print("1. Si")
    print("0. No")

    opc = float(input("Ingrese su opción: "))
    while opc != 1 and opc != 0:
         pc = float(input("Ingrese su opción: "))
    if opc == 0:
        i = opc
    

