Algoritmo salario_empleado
	//Calcula el salario semanal de un empleado partiendo de su salario mensual
	Definir salario Como Real;
	Definir salario_diario Como Real;
	Definir salario_semanal Como Real;
	Escribir "Ingrese su salario" ;
	Leer salario;
	Limpiar Pantalla;
	salario_diario = salario / 20 ;// Veinte días laborales en un trabajo promedio
	salario_semanal = salario_diario * 5; // Cinco días laborales/semana en un trabajo promedio
	Escribir  "Su salario semanal es : " salario_semanal;
	Esperar Tecla;
	
FinAlgoritmo
