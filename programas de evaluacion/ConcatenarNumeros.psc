Algoritmo ConcatenarNumerosPositivos
    // Declarar variables
    Dimension arregloNumeros[5] // Arreglo para almacenar los n�meros positivos
    Definir numero, contadorPositivos Como Entero
    cadenaConcatenada = ""
	
    // Inicializar contador de n�meros positivos
    contadorPositivos = 0
	
    // Leer 5 n�meros mientras no sean 0 o negativos y almacenar los positivos en el arreglo
    Mientras contadorPositivos < 5 Hacer
        Escribir "Ingrese un n�mero: "
        Leer numero
        Si numero > 0 Entonces
            contadorPositivos = contadorPositivos + 1
            arregloNumeros[contadorPositivos] = numero
        FinSi
    FinMientras
	
    // Concatenar los n�meros positivos en una sola cadena
    Para i <- 1 Hasta contadorPositivos Hacer
        cadenaConcatenada = cadenaConcatenada + ConvertirATexto(arregloNumeros[i])
    FinPara
	
    // Mostrar la cadena concatenada
    Escribir "Cadena concatenada: ", cadenaConcatenada
	
FinAlgoritmo

