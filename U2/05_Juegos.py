
edad = int(input("¿Cuál es tu edad? "))

if edad > 0:
    if edad <4:
            print("Tu pase es gratis.")
        
    elif edad >= 4 and edad <= 18:
            print("El precio pare entrar es 5$.")
    elif edad > 18:
            print("El precio pare entrar es 10$.")
else:
    print("Esa no es una edad válida.")
