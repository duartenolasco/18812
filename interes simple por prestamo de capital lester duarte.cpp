#include <stdio.h>
#include <conio.h>

main()
{
	int cuotas, capital, opci;
	float interessim, totalapagar, interesmen;

	while(opci!=6)
	{
		printf("******************Hola bienvenido/a nuestro codigo de calculado*****************************\n");                                                             
		printf("******************A continuacion te mostrare las cuotas***********************************\n");
		printf("******************Con los intereses estipulados de cada una *******************************\n");
		printf("******************Aqui presento la tabla de intereses vea sin compromiso********************\n");
		printf("1.- 6 cuotas con interes del 5%\n");
		printf("2.- 9 cuotas con interes del 7%\n");
		printf("3.- 12 cuotas con interes del 10%\n");
		printf("4.- 15 cuotas con interes del 12%\n");
		printf("5.- 18 cuotas con interes del 16%\n");
		printf("6.- salir\n");
		printf("Seleccione una opcion: ");
		scanf("%d",&opci);
		
		if(opci!=6){
			
			printf("Ingrese el capital que desea prestar: ");
			scanf("%d",&capital);
				
		}
	    
		switch(opci){
			case 1:
				interessim= capital*0.05*6;    
				printf("su capital a prestar es de: \n");              
				printf("su interes mensual es de: Q. \n",interessim);             
				interesmen= interessim/6;
				printf("su interes mensual es de: Q. \n",interesmen);
				totalapagar= interessim+capital;
				printf("su prestamo a pagar es del Q. \n",totalapagar);
				                                
			case 2:
				interessim= capital*0.07*9;    
				printf("su capital a prestar es de: Q. \n",capital);         
				printf("su interes mensual es de: Q. \n",interessim);             
				interesmen= interessim/9;
				printf("su interes mensual es de: Q. \n",interesmen);
				totalapagar= interessim+capital;
				printf("su prestamo a pagar es del Q. \n",totalapagar);
				
			case 3:
				interessim= capital*0.10*12;   
				printf("su capital a prestar es de: Q. \n",capital);         
				printf("su interes mensual es de: Q. \n",interessim);             
				interesmen= interessim/12;
				printf("su interes mensual es de: Q. \n",interesmen);
				totalapagar= interessim+capital;
				printf("su prestamo a pagar es del Q. \n",totalapagar);
				
			case 4:
				interessim= capital*0.12*15;   
				printf("su capital a prestar es de: Q. \n",capital);         
				printf("su interes mensual es de: Q. \n",interessim);             
				interesmen= interessim/15;
				printf("su interes mensual es de: Q. \n",interesmen);
				totalapagar= interessim+capital;
				printf("su prestamo a pagar es del Q. \n",totalapagar);
				
			case 5:
				interessim= capital*0.16*18; 
				printf("su capital a prestar es de: Q. \n",capital);         
				printf("su interes mensual es de: Q. \n",interessim);           
				interesmen= interessim/18;
				printf("su interes mensual es de: Q. \n",interesmen);
				totalapagar= interessim+capital;
				printf("su prestamo a pagar es del Q. \n",totalapagar);
				
			case 6:                                                                            
				break;				
		}	
	}
}

	
