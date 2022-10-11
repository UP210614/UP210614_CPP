
puntuacion = float(input("Ingrese su puntuación: "))

if puntuacion == 0.0 or puntuacion == 0 or puntuacion == 0.4 or puntuacion >= 0.6:
    print("Su bono es de = ", 2400*puntuacion)
else:
    print("Esa puntuación no existe")

