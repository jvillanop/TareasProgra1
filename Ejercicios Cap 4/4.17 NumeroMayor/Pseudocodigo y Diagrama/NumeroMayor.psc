Algoritmo NumeroMayor
	
	Definir contador, numero, mayor Como Entero; //Definición de variables a utilizar
	
	Mientras (contador < 10 ) Hacer // Ciclo de 0 a 9 = 10 veces el bucle
		Imprimir "Ingrese el numero por favor : "; //Solicitamos el ingreso del numero 
		Leer numero;
		Si contador ==0 Entonces // Asignamos el numero a la variable mayor cuando es la primera iteración
			mayor = numero;
		SiNo
			Si numero > mayor Entonces // Asignamos el numero cuando es mayor a la varible mayor
				mayor = numero;
			FinSi
		Fin Si
		contador = contador + 1 ;
	Fin Mientras
	
	Imprimir "El numero mayor es : " mayor ; // Imprimimos el numero mayor
	Esperar Tecla;
	
FinAlgoritmo
