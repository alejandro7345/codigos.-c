
	Algoritmo MostrarMayoresQueNumero
		
		Dimension arreglo[100] // Tama�o m�ximo del arreglo (puedes ajustarlo seg�n tus necesidades)
		Definir longi , num como entero
	
		Escribir "Ingrese la longitud del arreglo: "
		Leer longi
		
		// Leer los elementos del arreglo
		Para i <- 1 Hasta longi Hacer
			Escribir "Ingrese el elemento ", i, ": "
			Leer arreglo[i]
		FinPara
		
		// Solicitar al usuario ingresar el n�mero
		Escribir "Ingrese un n�mero: "
		Leer numero
		
		// Mostrar los elementos mayores que el n�mero dado
		Escribir "Elementos mayores que ", numero, ":"
		Para i <- 1 Hasta longi Hacer
			Si arreglo[i] > numero Entonces
				Escribir arreglo[i]
			FinSi
		FinPara
		
FinAlgoritmo

