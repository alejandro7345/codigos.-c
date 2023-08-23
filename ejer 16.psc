Algoritmo ordenar_matriz
    Definir c, cont, f, m, n, temp, matrix como entero
    cont <- 1
    n <- 1
	
    // Lee Datos al Array Bidimensional
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir "Ingrese valor " + cont + " de 9 : "
            Leer matrix[f][c]
            cont <- cont + 1
        Fin Para
    Fin Para
	
    // Ordenar Datos del Array Bidimensional
    Escribir ""
    Para m <- 0 Hasta 2 Con Paso 1 Hacer
        Para n <- 0 Hasta 2 Con Paso 1 Hacer
            Para f <- 0 Hasta 2 Con Paso 1 Hacer
                Para c <- 0 Hasta 2 Con Paso 1 Hacer
                    Si matrix[m][n] < matrix[f][c] Entonces
                        temp <- matrix[m][n]
                        matrix[m][n] <- matrix[f][c]
                        matrix[f][c] <- temp
                    Fin Si
                Fin Para
            Fin Para
        Fin Para
    Fin Para
	
    // Mostrar Datos al Array Bidimensional 2
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Escribir matrix[f][0] + " " + matrix[f][1] + " " + matrix[f][2]
    Fin Para
Fin Algoritmo
