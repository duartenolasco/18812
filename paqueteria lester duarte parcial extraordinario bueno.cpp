#include "iostream"
#include"string"

using namespace std;
int main (){
	int opcion1, opcion2, opcion3; // variables con numeros enteros

float can1, can2, can3, can4, can5, can6, kgs, kms ; // variables con numero real
float cankm, tarepeso1, pesovolumetrico, gua ,iza ,pet , chi, ret, disadep;// variables con numero real
	
	
		
cout << "Que tipo de mercaderia desea enviar?" << "\n";// mensaje en pantalla indicando una pregunta
cout << "Por favor seleccionar una de las siguientes opciones:" << "\n"; // mensaje en pantalla pide al usurio ingresar una opcion
cout << "\n"; // salto de linea
	cout << " 1: documentos" <<"\n"; // mensaje en pantalla primera opcion
	cout << " 2: paqueteria" <<"\n";// mensaje en pantalla segunda opcion
	cout << " 3: mobiliario" <<"\n";// mensaje en pantalla tercera opcion
	cout << " 4: respuestos" <<"\n";// mensaje en pantalla cuarta opcion
	cout << " 5: art. Electronicos " <<"\n";// mensaje en pantalla quinta opcion
	cin >>opcion1; // variable para la opcion 
	
	kgs= 2.5;
	kms=0.13;

cout << "A que departamento desea enviar la mercaderia?" << "\n"; // mensaje en pantalla indicando una pregunta
cout << "Por favor seleccionar una de las siguientes opciones:" << "\n";// mensaje en pantalla pide al usurio ingresar una opcion
cout << "\n";
	cout << "opcion 1: guatemala" <<"\n"; // mensaje en pantalla primera opcion
	cout << "opcion 2: izabal" <<"\n"; // mensaje en pantalla segunda opcion
	cout << "opcion 3: peten" <<"\n"; // mensaje en pantalla tercera opcion
	cout << "opcion 4: chiquimula" <<"\n"; // mensaje en pantalla cuarta opcion
	cout << "opcion 5: retalhuleu " <<"\n"; // mensaje en pantalla quinta opcion
	cin >> opcion3; // variable para la tercera opcion
	
	switch(opcion3) //segun de la opcion 3
	{case 1: // primera opcion
			gua= 10;
		break;
		
		case 2: //segunda opcion 
			iza=300;
		break;
		case 3://tercera opcion 
			pet= 460;
		break;
		
		case 4://cuarta opcion 
			chi=178;
		break;
		
		case 5: //quinta opcion 
			ret=200;
		break;		
break;

	}
disadep= gua,iza,pet,chi,ret; // formula para determinar el departamento y su distancia 		
cout << "Distacia del derpartamento a donde se va hacer el envio: " << disadep << "\n";// mensaje en pantalla para mostrar la distacia del departamento 


  switch(opcion1) { //segun para la primera opcion varaible
  	case 1:
		 cout << "El traslado y peso de los documentos a cualquiera de los departamento tiene un valor de Q 40.00" << "\n";
		 cout << "El total a pagar por lo documentos es de Q40.00" << "\n"; //mensaje en pantalla sobre monto a pagar por documentos
		 	break;
			
	
	case 2:
		 cout << "sabe el peso del articulo?" << "\n"; // mensaje en pantalla preguntado sobre el peso del articulo
		 cout << "Por favor selecciona una de las siguientes opciones:" << "\n";// mensaje en pantalla pidiendo que ingrese la opcion que desea seleccionar
		 cout << "\n";// salto de linea
		 cout << "Opcion 1: Si (con peso real)"<< "\n"; // mensaje en pantalla primera opcion por si se conoce el peso real
		 cout << "Opcion 2: No (con peso volumetrico)"<< "\n"; // mensaje en pantalla segunda opcion por si el usurio no conociera el peso real
		 cin>> opcion2; // variable para poner la opcion
		 	
			switch (opcion2){ // menu selectivo de segun de la segunda opcion variable
				
			case 1: // primera opcion 
			cout << "ingrese el peso real" <<"\n"; // pide que se ingrese el peso real
		 	cin>> can2; // variable del peso real
		 	if (can2 < 36 ) // if por si el peso real excede el peso maximo de 35
			 { 
			cankm= kms * disadep; // formula por si el peso maximo no pasa de 35
		 	cout<< "El valor a pagar por la distacia de entrega es de: Q" << cankm << "\n"; // mensaje en pantalla muestra lo que el usurio tiene que pagar por la distancia recorrida
		 	tarepeso1 = (can2 * kgs ) + cankm ; // formula para calcular el total de lo que el usuario debe de pagat
		 	
		 	cout << "La cantidad a pagar en total es de: Q"<< tarepeso1 << "\n"; // mensaje en pantalla le indica al usurio cuanto tiene que pagar en total
			}
			else // por si el usuario pone un peso mayor a 36 
			{	cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";} // mensaje en pantalla si el usurio pone un peso de mas de 36 
		 	break;
		 	
		 	case 2: //segunda opcion
		 		cout << "ingrese los siguientes datos para calcular el peso volumetrico" << "\n";// mensaje en pantalla  pide ingresar los datos para calcular el peso volumetrico
		 		cout << "\n";// salto de linea
		 		cout << "ingresar largo del paquete"<< "\n"; // mensaje en pantalla pide lo largo del paquete 
		 		cin  >> can4; // varible para el largo 
		 		cout << "ingresar el ancho del paquete" << "\n"; // mensaje en pantalla pidiendo lo ancho del paquete
		 		cin  >> can5; // variable  para ancho
		 		cout << "ingresar alto del paquete" << "\n"; // mensaje en pantalla pidiendo lo alto del paquete
		 		cin  >> can6; // variable para lo lato
		 		pesovolumetrico = (can4*can5*can6)/2272; // formula para calcular  peso volumetrico
		 		
		 		
		 		if (pesovolumetrico < 51 ) // condicion que si el peso volumetrico es menor que 51
				 {cankm= kms * disadep; // formula para calcular lo que se tiene que pagar por la distacia
		 		cout << "El peso volumetrico es de:" << pesovolumetrico <<"\n"; // mensaje en pantalla mustra el peso volimetrico en total
		 		tarepeso1 = ( pesovolumetrico * kgs ) + cankm; // formula para calcular lo que se se debe de pagar
		 		cout << "La cantidad total a pagar en total es de: Q"<< tarepeso1 << "\n";} // mensaje en pantalla muestra lo que tiene que pagar el usurio en total
		 		
		 		else // condicion por si el peso del paquete excesde lo 51
				{
		 		cout<< "el peso volumetrico es de: " << pesovolumetrico << "\n"; // mensaje en pantalla muesta lo calculado peso volumetrico 
		 		cout << "El peso real ingresado excede el limite establecida" << "\n";} // mensaje en pantalla por si el peso excede lo establecido
		 	break;
			}
			
	case 3:
		cout << "Conoce el peso del articulo?" << "\n"; // mensaje en pantalla preguntado sobre el peso del articulo
		 cout << "Por favor seleccionar una de las siguientes opciones:" << "\n";// mensaje en pantalla pidiendo que ingrese la opcion que va a seleccionar
		 cout << "\n";// salto de linea
		 cout << "Opcion 1: Si (con peso real)"<< "\n"; // mensaje en pantalla primera opcion por si se conoce el peso real
		 cout << "Opcion 2: No (con peso volumetrico)"<< "\n"; // mensaje en pantalla segunda opcion por si el usurio no conociera el peso real
		 cin>> opcion2; // variable para poner la opcion
		 	
			switch (opcion2){ // menu selectivo
				
			case 1: // primera opcion 
			cout << "ingrese el peso real" <<"\n"; // pide que se ingrese el peso real
		 	cin>> can2; // variable del peso real
		 	if (can2 < 36 ) // if por si el peso real excede el peso maximo de 35
			 { 
			cankm= kms * disadep; // formula por si el peso maximo no pasa de 35
		 	cout<< "El valor a pagar por la distacia de entrega es de: Q" << cankm << "\n"; // mensaje en pantalla muestra lo que el usurio tiene que pagar por la distancia recorrida
		 	tarepeso1 = (can2 * kgs ) + cankm ; // formula para calcular el total de lo que el usuario debe de pagat
		 	
		 	cout << "La cantidad a pagar en total es de: Q"<< tarepeso1 << "\n"; // mensaje en pantalla le indica al usurio cuanto tiene que pagar en total
			}
			else // por si el usuario pone un peso mayor a 36 
			{	cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";} // mensaje en pantalla si el usurio pone un peso de mas de 36 
		 	break;
		 	
		 	case 2: //segunda opcion
		 		cout << "ingrese los siguientes datos para calcular el peso volumetrico" << "\n";// mensaje en pantalla  pide ingresar los datos para calcular el peso volumetrico
		 		cout << "\n";// salto de linea
		 		cout << "ingresar largo del paquete"<< "\n"; // mensaje en pantalla pide lo largo del paquete 
		 		cin  >> can4; // varible para el largo 
		 		cout << "ingresar el ancho del paquete" << "\n"; // mensaje en pantalla pidiendo lo ancho del paquete
		 		cin  >> can5; // variable  para ancho
		 		cout << "ingresar alto del paquete" << "\n"; // mensaje en pantalla pidiendo lo alto del paquete
		 		cin  >> can6; // variable para lo lato
		 		pesovolumetrico = (can4*can5*can6)/2272; // formula para calcular  peso volumetrico
		 		
		 		
		 		if (pesovolumetrico < 51 ) // condicion que si el peso volumetrico es menor que 51
				 {cankm= kms * disadep; // formula para calcular lo que se tiene que pagar por la distacia
		 		cout << "El peso volimetrico es de:" << pesovolumetrico <<"\n"; // mensaje en pantalla mustra el peso volimetrico en total
		 		tarepeso1 = ( pesovolumetrico * kgs ) + cankm; // formula para calcular lo que se se debe de pagar
		 		cout << "La cantidad total a pagar en total es de: Q"<< tarepeso1 << "\n";} // mensaje en pantalla muestra lo que tiene que pagar el usurio en total
		 		
		 		else // condicion por si el peso del paquete excesde lo 51
				{
		 		cout<< "el peso volumetrico es de: " << pesovolumetrico << "\n"; // mensaje en pantalla muesta lo calculado peso volumetrico 
		 		cout << "El peso real ingresado excede el limite establecida" << "\n";} // mensaje en pantalla por si el peso excede lo establecido
		 	break;
			}
			
			
	case 4:
		 cout << "Conoce el peso del articulo?" << "\n"; // mensaje en pantalla preguntado sobre el peso del articulo
		 cout << "Por favor seleccionar una de las siguientes opciones:" << "\n";// mensaje en pantalla pidiendo que ingrese la opcion que va a seleccionar
		 cout << "\n";// salto de linea
		 cout << "Opcion 1: Si (con peso real)"<< "\n"; // mensaje en pantalla primera opcion por si se conoce el peso real
		 cout << "Opcion 2: No (con peso volumetrico)"<< "\n"; // mensaje en pantalla segunda opcion por si el usurio no conociera el peso real
		 cin>> opcion2; // variable para poner la opcion
		 	
			switch (opcion2){ // menu selectivo
				
			case 1: // primera opcion 
			cout << "ingrese el peso real" <<"\n"; // pide que se ingrese el peso real
		 	cin>> can2; // variable del peso real
		 	if (can2 < 36 ) // if por si el peso real excede el peso maximo de 35
			 { 
			cankm= kms * disadep; // formula por si el peso maximo no pasa de 35
		 	cout<< "El valor a pagar por la distacia de entrega es de: Q" << cankm << "\n"; // mensaje en pantalla muestra lo que el usurio tiene que pagar por la distancia recorrida
		 	tarepeso1 = (can2 * kgs ) + cankm ; // formula para calcular el total de lo que el usuario debe de pagat
		 	
		 	cout << "La cantidad a pagar en total es de: Q"<< tarepeso1 << "\n"; // mensaje en pantalla le indica al usurio cuanto tiene que pagar en total
			}
			else // por si el usuario pone un peso mayor a 36 
			{	cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";} // mensaje en pantalla si el usurio pone un peso de mas de 36 
		 	break;
		 	
		 	case 2: //segunda opcion
		 		cout << "ingrese los siguientes datos para calcular el peso volumetrico" << "\n";// mensaje en pantalla  pide ingresar los datos para calcular el peso volumetrico
		 		cout << "\n";// salto de linea
		 		cout << "ingresar largo del paquete"<< "\n"; // mensaje en pantalla pide lo largo del paquete 
		 		cin  >> can4; // varible para el largo 
		 		cout << "ingresar el ancho del paquete" << "\n"; // mensaje en pantalla pidiendo lo ancho del paquete
		 		cin  >> can5; // variable  para ancho
		 		cout << "ingresar alto del paquete" << "\n"; // mensaje en pantalla pidiendo lo alto del paquete
		 		cin  >> can6; // variable para lo lato
		 		pesovolumetrico = (can4*can5*can6)/2272; // formula para calcular  peso volumetrico
		 		
		 		
		 		if (pesovolumetrico < 51 ) // condicion que si el peso volumetrico es menor que 51
				 {cankm= kms * disadep; // formula para calcular lo que se tiene que pagar por la distacia
		 		cout << "El peso volimetrico es de:" << pesovolumetrico <<"\n"; // mensaje en pantalla mustra el peso volimetrico en total
		 		tarepeso1 = ( pesovolumetrico * kgs ) + cankm; // formula para calcular lo que se se debe de pagar
		 		cout << "La cantidad total a pagar en total es de: Q"<< tarepeso1 << "\n";} // mensaje en pantalla muestra lo que tiene que pagar el usurio en total
		 		
		 		else // condicion por si el peso del paquete excesde lo 51
				{
		 		cout<< "el peso volumetrico es de: " << pesovolumetrico << "\n"; // mensaje en pantalla muesta lo calculado peso volumetrico 
		 		cout << "El peso real ingresado excede el limite establecida" << "\n";} // mensaje en pantalla por si el peso excede lo establecido
		 	break;
			}
	
	case 5:
		 cout << "Conoce el peso del articulo?" << "\n"; // mensaje en pantalla preguntado sobre el peso del articulo
		 cout << "Por favor seleccionar una de las siguientes opciones:" << "\n";// mensaje en pantalla pidiendo que ingrese la opcion que va a seleccionar
		 cout << "\n";// salto de linea
		 cout << "Opcion 1: Si (con peso real)"<< "\n"; // mensaje en pantalla primera opcion por si se conoce el peso real
		 cout << "Opcion 2: No (con peso volumetrico)"<< "\n"; // mensaje en pantalla segunda opcion por si el usurio no conociera el peso real
		 cin>> opcion2; // variable para poner la opcion
		 	
			switch (opcion2){ // menu selectivo
				
			case 1: // primera opcion 
			cout << "ingrese el peso real" <<"\n"; // pide que se ingrese el peso real
		 	cin>> can2; // variable del peso real
		 	if (can2 < 36 ) // if por si el peso real excede el peso maximo de 35
			 { 
			cankm= kms * disadep; // formula por si el peso maximo no pasa de 35
		 	cout<< "El valor a pagar por la distacia de entrega es de: Q" << cankm << "\n"; // mensaje en pantalla muestra lo que el usurio tiene que pagar por la distancia recorrida
		 	tarepeso1 = (can2 * kgs ) + cankm ; // formula para calcular el total de lo que el usuario debe de pagat
		 	
		 	cout << "La cantidad a pagar en total es de: Q"<< tarepeso1 << "\n"; // mensaje en pantalla le indica al usurio cuanto tiene que pagar en total
			}
			else // por si el usuario pone un peso mayor a 36 
			{	cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";} // mensaje en pantalla si el usurio pone un peso de mas de 36 
		 	break;
		 	
		 	case 2: //segunda opcion
		 		cout << "ingrese los siguientes datos para calcular el peso volumetrico" << "\n";// mensaje en pantalla  pide ingresar los datos para calcular el peso volumetrico
		 		cout << "\n";// salto de linea
		 		cout << "ingresar largo del paquete"<< "\n"; // mensaje en pantalla pide lo largo del paquete 
		 		cin  >> can4; // varible para el largo 
		 		cout << "ingresar el ancho del paquete" << "\n"; // mensaje en pantalla pidiendo lo ancho del paquete
		 		cin  >> can5; // variable  para ancho
		 		cout << "ingresar alto del paquete" << "\n"; // mensaje en pantalla pidiendo lo alto del paquete
		 		cin  >> can6; // variable para lo lato
		 		pesovolumetrico = (can4*can5*can6)/2272; // formula para calcular  peso volumetrico
		 		
		 		
		 		if (pesovolumetrico < 51 ) // condicion que si el peso volumetrico es menor que 51
				 {cankm= kms * disadep; // formula para calcular lo que se tiene que pagar por la distacia
		 		cout << "El peso volimetrico es de:" << pesovolumetrico <<"\n"; // mensaje en pantalla mustra el peso volimetrico en total
		 		tarepeso1 = ( pesovolumetrico * kgs ) + cankm; // formula para calcular lo que se se debe de pagar
		 		cout << "La cantidad total a pagar en total es de: Q"<< tarepeso1 << "\n";} // mensaje en pantalla muestra lo que tiene que pagar el usurio en total
		 		
		 		else // condicion por si el peso del paquete excesde lo 51
				{
		 		cout<< "el peso volumetrico es de: " << pesovolumetrico << "\n"; // mensaje en pantalla muesta lo calculado peso volumetrico 
		 		cout << "El peso real ingresado excede el limite establecida" << "\n";} // mensaje en pantalla por si el peso excede lo establecido
		 	break;
			}
	}
  }
  
  	
          

