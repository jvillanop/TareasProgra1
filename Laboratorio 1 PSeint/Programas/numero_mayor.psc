Algoritmo numero_mayor
	//Calcula el numero mayor entre A y B
	Definir a Como Entero ;
	Definir b Como Entero ;
	a = 0;
	b = 0;
	Escribir "Ingrese el número para A:" ;
	Leer a;
	Limpiar Pantalla;
	Escribir "Ingrese el número para B:";
	Leer b;
	Limpiar Pantalla;
	Si a > b Entonces
		Escribir  "El numero mayor es A : " a ;
	FinSi
	Si b > a Entonces
		Escribir  "El numero mayor es B :" b ;
	FinSi
	Si a==b Entonces
		Escribir  "A y B numeros son iguales.";
	FinSi
	
	Esperar Tecla;	
FinAlgoritmo
