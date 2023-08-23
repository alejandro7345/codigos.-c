Algoritmo sin_titulo
	escribir "ingrese una cantidad de segundos"
	leer seg
	si seg<= 0 Entonces
		escribir "este tipo de dato no esta permitido "
		
	FinSi
	
   si seg>0 Entonces
		
	
	 h=trunc(seg/3600)
	 seg=seg-(h*3600)
	 m=trunc(seg/60)
	 seg=seg-(m*60)
	 s=seg 
	 Escribir " LA CANTIDAD DE  " seg " SEGUNDOS ES EQUIVALENTE A : "  
	 escribir "   "
	 escribir "|||||| " h " HORAS " m " MINUTOS " s " SEGUNDOS ||||||"
   FinSi

FinAlgoritmo
