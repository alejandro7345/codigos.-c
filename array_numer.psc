Algoritmo array_numer
    Definir fila, f, ff, vector, temp como numero;
    Dimension vector[10];		
    temp <-0;
    f <- 0;
    ff <- 0;

    Para fila <- 1 Hasta 10 Con Paso 1 Hacer				
        Escribir "Ingrese el valor ", fila , " : ";	
        Leer vector(fila);
        Para f <- 1 Hasta fila Con Paso 1 Hacer				
            Para ff <- f Hasta fila Con Paso 1 Hacer				
                Si vector(f) > vector(ff) Entonces
                    temp <- vector(f);
                    vector(f) <- vector(ff);
                    vector(ff) <- temp;
                FinSi				
            FinPara
        FinPara				
    FinPara	

    Para fila <- 1 Hasta 10 Con Paso 1 Hacer	
        Escribir vector(fila);
    FinPara
FinAlgoritmo
