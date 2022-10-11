
i = 0

max = -100
min = 1000
suma = 0

while(i < 6):
    temperatura = float(input("Ingrese una temperatura: "))
    if(temperatura <min):
        min = temperatura
    if(temperatura > max):
        max = temperatura
    suma += temperatura
    i += 1

promedio = suma/6
print("La temperatura promedio es: {}".format(promedio))
print("La temperatura más alta es: {}".format(max))
print("La temperatura más baja es: {}".format(min))




