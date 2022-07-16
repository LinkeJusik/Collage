aux = 0

def start():
    # No es necesario indicar que quieres usar la variable global
    global aux
    print("El valor de no_choice es:", aux)
    aux += 1
    print("El nuevo valor de no_choice es:", aux)
    
start()
print(aux)

