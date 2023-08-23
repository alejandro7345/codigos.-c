Algoritmo sin_titulo
	
	Escribir "ingrese el numero de teclados que desea comprar"
	leer a
	
	si a>=8 Entonces
		b=a*80
		f=80
	FinSi
	si a<8 y a>4 Entonces
		b=a*90
		f=90
	FinSi
	si a<4 Entonces
		b=a*100
		f=100
	FinSi
	
	escribir " TECLADOS COMPRADOS: " a
	escribir " PRECIO POR TECLADO: " f 
	Escribir " TOTAL: " b
FinAlgoritmo
