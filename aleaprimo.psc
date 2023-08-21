Algoritmo aleaprimo
    Escribir "ingrese el numero de elementos : "
    Leer N	
    Dimension elemen[N]
    Para f = 1 Hasta N Con Paso 1 Hacer
        elemen[f] = Azar(50)
        Escribir Sin Saltar elemen[f], " "
    FinPara
 
    Escribir " "
    Escribir "Los numeros Primos son:"
    Para f = 1 Hasta N Con Paso 1 Hacer
        r = 0;		
        Para p = 1 Hasta elemen[f] Con Paso 1 Hacer
            Si (elemen[f] mod p == 0) Entonces
                r = r + 1
            FinSi					
        FinPara			
        Si (r == 2) Entonces
            Escribir Sin Saltar elemen[f], " "
            suma = suma + 1
        FinSi		
    FinPara

    Escribir "El total de numeros primos son : ", suma
 
FinAlgoritmo
