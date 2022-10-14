

palabra = input("Ingrese una palabra: ")

contador = 0
l = len(palabra)
i = 0

while i < l:
    if palabra[i] == ' ' and palabra[i+1] != ' ':
        contador += 1
    i += 1

print("Número de palabras : {}".format(contador))
