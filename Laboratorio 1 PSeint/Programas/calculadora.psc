Algoritmo calculadora
	// Version personal de la calculadora vista en clase
	Repetir		
		Escribir "Menu de opciones";
		Escribir " 1: Suma";
		Escribir " 2: Resta";
		Escribir " 3: Multiplicaci�n";
		Escribir " 4: Divisi�n";
		Escribir " - - - - - - - ";
		Escribir "0 : Salir";
		Leer opcion;
		Limpiar Pantalla;
		si  opcion < 5 Entonces
			Escribir  "Ingrese primer numero";
			Leer n1;
			Escribir  "Ingrese segundo numero";
			Leer n2;
			Mientras n2==0 y opcion==4
				Escribir  "No se permite la divisi�n entre 0, favor ingrese el segundo numero";
				Leer n2;
			FinMientras
			Segun opcion Hacer
				1:
				Escribir " El resultado de la suma es :" n1 + n2 ;
				2:
				Escribir  "El resultado de la resta es : " n1 - n2;
				3:
				Escribir "El resultado de la multiplicaci�n es : " n1 * n2;
				4: 
				Escribir "El resultado de la divisi�n es : " n1 / n2;
							
			Fin Segun
		
		SiNo			
			Escribir  "Opci�n no existe ingrese al menu y repita su elecci�n";
		FinSi
		Esperar Tecla;
		Limpiar Pantalla;
		

	Hasta Que opcion == 0

Escribir "Gracias por utilizar este programa";
	
	
FinAlgoritmo
