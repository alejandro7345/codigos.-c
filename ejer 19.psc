Algoritmo conversion_grados
	
	Escribir "Escoja una conversion"
	Escribir "1. C a F"
	Escribir "2. F a C"
	Leer n
	Limpiar pantalla
	
	Si n == 1 Entonces
		Escribir "Ingrese una cantidad en grados Celsius: "
		Leer c
		f <- (c*9/5) + 32
		Escribir ""
		Escribir c, " grados Celsius equivale a ", f, " grados Fahrenheit."
	Sino
		Escribir "Ingrese una cantidad en grados Fahrenheit: "
		Leer f
		c <- (f-32)*5/9
		Limpiar pantalla
		
		Escribir ""
		Escribir f, " grados Fahrenheit equivale a ", c, " grados Celsius."
	Fin Si
Fin Algoritmo
