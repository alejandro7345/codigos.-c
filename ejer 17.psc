Algoritmo calcular_interes
    Definir meses, mont como entero
    Definir monto, intereses, totalp como real
    
    Escribir "CALCULAR EL INTERES A PAGAR."
    Escribir ""
    Escribir "Ingrese el monto."
    Leer mont
    
    Escribir "Ingrese Nro Meses : "
    Leer meses
    
    intereses <- (mont*(meses*0.02))
    totalp <- mont+intereses
    
    Escribir "Interes    : " & intereses
    Escribir "Pago Total : " & totalp
    
Fin Algoritmo
