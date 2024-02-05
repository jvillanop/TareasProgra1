Algoritmo cocienteresiduo_a_b
	// Calcula el cociente y el residuo entre A y B
	Definir a Como Entero;
	Definir b Como Entero;
	Definir residuo Como Real;
	Definir cociente Como Real;
	a <- 0;
	b <- 0;
	Escribir 'Ingrese primer número :';
	Leer a;
	Limpiar Pantalla;
	Escribir 'Ingrese segundo número :';
	Leer b;
	Mientras b==0 Hacer
		Escribir 'No se permite división entre 0 , favor indique el segundo numero';
		Leer b;
	FinMientras
	Limpiar Pantalla;
	residuo <- a MOD b;
	cociente <- a/b;
	Escribir 'El residuo de a y b es : ', residuo;
	Escribir 'El cociente de a y b es : ', cociente;
	Esperar Tecla;
FinAlgoritmo
