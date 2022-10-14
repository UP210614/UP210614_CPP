
palabra = input("Ingrese una palabra: ")
a = 0
e = 0
v_i = 0
o = 0
u = 0
i=0
mayusculas = 0
minusculas = 0
l = len(palabra)
palabra2 = palabra
palabra = palabra.lower()

while i < l:
    match palabra[i]:
        case 'a': a +=1
        case 'e': e +=1
        case 'i': v_i +=1
        case 'o': o +=1
        case 'u': u +=1
    if palabra2[i] == palabra2[i].upper():
        mayusculas += 1
    i+=1



print("a = {}".format(a))
print("e = {}".format(e))
print("i = {}".format(v_i))
print("o = {}".format(o))
print("u = {}".format(u))
print("Mayúsculas en la palabra = {}".format(mayusculas))