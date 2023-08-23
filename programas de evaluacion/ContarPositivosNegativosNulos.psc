Algoritmo ContarPositivosNegativosNulos
    // Declarar variables
    Dimension arreglo[10] // Arreglo de 10 elementos
    Definir contadorPositivos, contadorNegativos, contadorNulos Como Entero
    contadorPositivos = 0
    contadorNegativos = 0
    contadorNulos = 0
	
    // Leer los valores del arreglo
    Para i <- 1 Hasta 10 Hacer
        Escribir "Ingrese el valor ", i, ": "
        Leer arreglo[i]
    FinPara
	
    // Contar positivos, negativos y nulos
    Para i <- 1 Hasta 10 Hacer
        Si arreglo[i] > 0 Entonces
            contadorPositivos = contadorPositivos + 1
        Sino Si arreglo[i] < 0 Entonces
				contadorNegativos = contadorNegativos + 1
			Sino
				contadorNulos = contadorNulos + 1
			FinSi
		FinSi
		
		FinPara
		
		// Mostrar resultados
		Escribir "Cantidad de valores positivos: ", contadorPositivos
		Escribir "Cantidad de valores negativos: ", contadorNegativos
		Escribir "Cantidad de valores nulos: ", contadorNulos
		
FinAlgoritmo
