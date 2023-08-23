Algoritmo sin_titulo
	Definir numero, numeroInvertido, cifra como Entero
	
    Escribir "Ingrese un número de varias cifras:"
    Leer numero
	
    numeroInvertido <- 0
	
    Mientras numero > 0 Hacer
        cifra <- numero MOD 10 
        numeroInvertido <- numeroInvertido * 10 + cifra 
        numero <- numero DIV 10 
    Fin Mientras
	
    Escribir "El número invertido es:", numeroInvertido
FinAlgoritmo
