Algoritmo sin_titulo
	
	escribir " ingrese dos numeros enteros"
	Leer a
	leer b
	
	Escribir "ingrese un operador matematico"
	leer op
	
	Segun op Hacer
		
		"+":
			Escribir "~~~~ suma de numeros ~~~~"
			k=a+b
			Escribir "la suma de " a "+" b " es " k
			
		"*":
			escribir "~~~~ multiplicacion de numeros ~~~"
			k=a*b
			Escribir "la multiplicacion de " a "*" b " es " k
			
		"-":
			Escribir "~~~~ resta de numeros ~~~~"
			k=a/b
			Escribir "la resta de " a "-" b " es " k
		"/":
			Escribir "~~~~ cociente de numeros ~~~~"
			k=a/b
			Escribir "la divicion de " a "/" b " es " k
			
		"mod" o "MOD":
			
		    Escribir "~~~~ residuo de una divicion ~~~~"
		    k= a mod b
		    Escribir "el residuo de " a "/" b " es " k
			
		De Otro Modo:
			escribir "~~~ el operador ingresado no es valido ~~~"
	Fin Segun

FinAlgoritmo
