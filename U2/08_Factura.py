
suma = 0
print("Para dejar de contar ingrese un 0")
precio = float(input("Ingrese el precio de su producto: "))

while(precio != 0):
    suma += precio
    precio = float(input("Ingrese el precio de su producto: "))

print("Total de la factura: {}".format(suma))
