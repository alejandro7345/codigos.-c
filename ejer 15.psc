Algoritmo sin_titulo
	Definir c, f, num como Entero
    Definir matrix como Matriz Entero [4][5]
	
    num <- 1
	
    // Carga Numeros Naturales
    Para f <- 0 Hasta 3 Con Paso 1 Hacer
        Para c <- 0 Hasta 4 Con Paso 1 Hacer
            matrix[f][c] <- num
            num <- num + 1
        Fin Para
    Fin Para
	
    // Ingrese numero 1 al 20 :
    Escribir "Ingrese Numero del 1 al 20: "
    Leer num
    Escribir ""
	
    Si num >= 1 Y num <= 20 Entonces
        // Mostrar Datos al Array Bidimencional 2
        Para f <- 0 Hasta 3 Con Paso 1 Hacer
            Escribir matrix[f][0], " ", matrix[f][1], " ", matrix[f][2], " ", matrix[f][3], " ", matrix[f][4]
        Fin Para
        Escribir ""
		
        // Buscando Numero
        Para f <- 0 Hasta 3 Con Paso 1 Hacer
            Para c <- 0 Hasta 4 Con Paso 1 Hacer
                Si matrix[f][c] == num Entonces
                    Escribir "Posicion en la MATRIZ[", f+1, ",", c+1, "]"
                Fin Si
            Fin Para
        Fin Para
    Sino
        Escribir "Numero mal Ingresado"
    Fin Si
	
FinAlgoritmo
