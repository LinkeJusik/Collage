n=int(input("¿Hasta que número desea calcular la sumatoria de los primeros n terminos?"))

counter=0
for i in range(1,n+1,1):
    for j in range(1,i+1,1):
        counter+=1

print(counter)