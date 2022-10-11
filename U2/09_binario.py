

num_binario=str(input("Introduce un número binario: "))
num_decimal=0
for posicion, digito_string in enumerate(num_binario[::-1]):
	num_decimal += int(digito_string) * 2 ** posicion
print('El número binario {} en sistema decimal es: {}.'.format(num_binario, num_decimal))