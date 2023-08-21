Algoritmo sin_titulo
	k<- 10
	i=1
	p<- 0
	im<- 0
	nu<-0
	dimension nume[k]
	escribir "ingrese un numero"
	Mientras i <= k Hacer
	
		leer n
		Si n>0 Entonces
			p<-p+1
		FinSi
			Si n<0 Entonces
				im<-im+1
			FinSi	
			Si n=0 Entonces
				nu<-nu+1
			FinSi	
			i<-i+1
		Fin Mientras
		
		escribir "los numeros positivos son: " p
		escribir "los numeros negativos son: " im
		escribir "los numeros nulos son: " nu
		
FinAlgoritmo
