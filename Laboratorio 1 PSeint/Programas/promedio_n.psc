Algoritmo promedio_n
	//Calcula el promedio de n numeros ya que le permite al usuario ingresar la cantidad que desee
	Definir salida Como Entero;
	Definir numero Como Real;
	Definir contador Como Entero;
	Definir total Como Real;
	Definir promedio Como Real;
	salida = 0;
	numero = 0; 
	total = 0;
	Repetir
		Escribir "Ingrese el valor para sumar y promediar";
		Leer numero;
		total = numero + total;
		contador = contador + 1;
		
		Limpiar Pantalla;
		Escribir "Desea ingresar mas numeros:" ;
		Escribir " 1 : Si";
		Escribir " 0 : No";
		Leer salida;
		Limpiar Pantalla;	
	Hasta Que salida == 0;
	Limpiar Pantalla;
	promedio = total / contador;
	Escribir  "El promedio de los " contador " numeros ingresadoes es : " promedio;
	Esperar Tecla;
FinAlgoritmo
