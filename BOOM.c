#include <stdio.h>
#include <windows.h>

int temporizador1 ();
int faseinicial ();
int PyR1 ();
int PyR34 ();

int main ()
{
	
	
	char option,name_1[20],name_2[20],dinero_1,dinero_2;
    int tema;
    
		printf ("Bienvenido a BOOM!!\n Elige la modalidad a la que deseas jugar teniendo en cuenta que:\n -si pulsas 1 jugaras en modo individual.\n -si pulsas 2 jugaras en modo multijugador.\n -pulsa cualquier otra tecla para salir del juego\n");
		scanf ("%c", &option);
		
			switch (option)
			{
				case '1': // CASO INDIVIDUAL. El juego ser� de un �nico jugador, o grupo, dando una �nica soluci�n//
					system("cls");
					printf ("Has elegido el modo individual, escribe tu nombre.\n");
					scanf ("%s", &name_1);
						printf (" PRIMERA PARTE DEL JUEGO\nINSTRUCCIONES: %s corta el cable de todas las respuestas exceto de la que creas que es la correcta.\n ", name_1);
						
							system("cls");
						
						faseinicial ();
	
						printf ( "BOMBA BONUS:\nINSTRUCCIONES: %s elije un tema teniendo en cuenta que:\n.1 pertenece a DEPORTES.\n.2 pertenece a HISTORIA\n.3 iremos incluyendo mas.\n Posteriormente, selecciona las 5 respuestas correctas.\n", name_1);

							do
							{
							printf("Introduce una opcion entre las propuestas.\n");
							scanf (" %c", &tema); // En este caso la bomba bonus ser�a para conseguir 15segundos extra para la bomba final. Una vez juguemos esta, el dinero que llevemos hasta entonces estar�a asegurado//
							}
							while (tema!='1' && tema!='2' && tema!='3');
			
								switch (tema)
								{
								case '1': 
									printf ("DEPORTES\n");
								break;
							
								case '2':
									printf ("HISTORIA\n");
								break;
							
								case '3':
									printf ("IREMOS INTRODUCIENDO MAS\n");
								break;
				
								}
		
						printf ("BOMBA FINAL.\n"); //Consiste en contestar durante un minuto(sin contar si se ha conseguido bonus) preguntas de dos opciones. Cada acierto ser� un +300, cada error -100//
						printf ( "BOMBA PARA EL BOTE\n");
							break;
	
	
				case '2': // CASO MULTIJUGADOR. Se trata de dos grupos, pero dando una �nica soluci�n por grupo.//
			
					printf ("Has elegido el modo multijugador. Por favor introduce el nombre del jugador 1.\n");
					scanf ("%s",&name_1);
						printf ("Ahora introduce el nombre del jugador 2.\n");
						scanf ("%s", &name_2 );
							printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 1:\nINSTRUCCIONES: %s corta el cable de todas las respuestas excepto de la que creas que es la correcta.\n ", name_1);
							
							faseinicial();
							
							printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 2:\nINSTRUCCIONES: %s corta el cable de todas las respuestas excepto de la que creas que es la correcta.\n ", name_2);
							
							faseinicial();
							
							printf ( "BOMBA BONUS PARA JUGADOR 1:\nINSTRUCCIONES: %s elije un tema teniendo en cuenta que:\n.1 pertenece a DEPORTES.\n.2 pertenece a HISTORIA\n.3 iremos incluyendo mas.\n Posteriormente, selecciona las 5 respuestas correctas.\n", name_1);
			
								do
								{
									printf("Introduce una opcion entre las propuestas.\n");
									scanf (" %c", &tema); // En este caso la bomba bonus ser�a para conseguir 15segundos extra para la bomba final. Una vez juguemos esta, el dinero que llevemos hasta entonces estar�a asegurado//
								}
			
								while (tema!='1' && tema!='2' && tema!='3');
		
									switch (tema)
									{
										case '1': 
										printf ("DEPORTES\n");
										break;
									
										case '2':
											printf ("HISTORIA\n");
										break;
									
										case '3':
											printf ("IREMOS INTRODUCIENDO MAS\n");
										break;
								
									}
			
							printf ( "BOMBA BONUS PARA JUGADOR 2:\nINSTRUCCIONES: %s elije un tema teniendo en cuenta que:\n.1 pertenece a DEPORTES.\n.2 pertenece a HISTORIA\n.3 iremos incluyendo mas.\n Posteriormente, selecciona las 5 respuestas correctas.\n", name_2);
			
								do
								{
									printf("Introduce una opcion entre las propuestas.\n");
									scanf (" %c", &tema); // En este caso la bomba bonus ser�a para conseguir 15segundos extra para la bomba final. Una vez juguemos esta, el dinero que llevemos hasta entonces estar�a asegurado//
								}
								
								while (tema!='1' && tema!='2' && tema!='3');
								
									switch (tema)
									{
										case '1': 
											printf ("DEPORTES\n");
										break;
									
										case '2':
											printf ("HISTORIA\n");
										break;
									
										case '3':
											printf ("IREMOS INTRODUCIENDO MAS\n");
										break;
									
									}
		
			
							printf ("BOMBA FINAL PARA %s\n", name_1);
			
							printf ("BOMBA FINAL PARA %s\n", name_2);
		
			
			
								if (dinero_1>dinero_2)
									printf ("Como %s ha obtenido %i y %s ha obtenido %i, pasa a jugar la BOMBA PARA EL BOTE el jugador %s.\n",name_1,dinero_1,name_2,dinero_2,name_1);
								
										else if (dinero_1=dinero_2)
											printf ("Pregunta de desempate\n");
								
												else 
													printf ("Como %s ha obtenido %i y %s ha obtenido %i, pasa a jugar la BOMBA PARA EL BOTE el jugador %s.\n",name_2,dinero_2,name_1,dinero_1,name_2);
							
								
														printf("BOMBA PARA EL BOTE.\n");//como he dicho solo la jugar� el que m�s dinero haya conseguido hasta la bomba anterior.Consistir� en contestar 10 preguntas a lo largo de 2 minutos//
	
				default:
					printf ("Hasta pronto.\n");
					break;
		}	


return 0;
}



/////////////

int temporizador1 (){
	
	int tiempo;
	
	printf("Dispone de 1 minuto.\n\n");
    
	for(tiempo=0; tiempo<10; tiempo++){
        Sleep(1000);
        printf ("%02i\r",tiempo+1);
    }

    printf("Se acabo el tiempo\n\n");
	
	return 0;
}

//////////////

int faseinicial (){
	
	
printf ("FASE INICIAL\n");
		
	printf ("Primera bomba\n");
		
		printf("Juegas por 300 euros\n");
						
			//temporizador1 ();
			
			PyR1 ();
						
			system("pause");
			system("cls");
						
	printf("Segunda bomba\n");
		
		printf("Juegas por 400 euros\n");
						
			//temporizador1 ();
			PyR1 ();
						
			system("pause");
			system("cls");
						
	printf("Tercera bomba\n");
		
		printf("Juegas por 500 euros\n");
						
			//temporizador1 ();
			PyR34 ();
						
			system("pause");
			system("cls");
						
	printf("Cuarta bomba\n");
		
		printf("Juegas por 600 euros\n");
							
			//temporizador1 ();
			PyR34 ();
							
			system("pause");
			system("cls");
	

return 0;
}


//////////////


int PyR1 (){
	FILE   *fp;
FILE   *fp2;
char   buf[200];
int    flines;    /* numero de lineas en el archivo */
int    rline;     /* la linea aleatoria para leer */
int    i;
int    resp;
int    k;
int    s;
 
s=0;
srand(time(NULL));
if ( ! ( fp = fopen("PreguntasBs1y2.txt", "r")) )
   {
   printf("Error al abrir el archivo\n");
   }
 
for ( flines = 0 ; fgets(buf, sizeof(buf), fp) ; ++flines);
 
if ( flines == 0 )
   {
   printf("El archivo esta vacio\n");
   }
 
rline = rand() % (flines);
 
rewind(fp);
 
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp);
printf("%s\n", buf);

//printf("%i",rline);



//_________


if ( ! ( fp2 = fopen("RespuestasBs1y2.txt", "r")) )
   {
   printf("\nError al abrir el archivo\n");
   return(0);
   }
   
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp2);
printf("%s", buf);

scanf("%i",&resp);


if (rline == 1){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 2){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 3){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 4){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 5){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 6){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 7){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 8){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 9){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 10){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 11){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 12){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}

//printf("\n%i",s);



getchar();
	return (s);
}


///////////////


int PyR34 (){
	FILE   *fp3;
FILE   *fp4;
char   buf[200];
int    flines;    /* numero de lineas en el archivo */
int    rline;     /* la linea aleatoria para leer */
int    i;
int    resp;
int    k;
int    s;
 
s=0;
srand(time(NULL));
if ( ! ( fp3 = fopen("PreguntasBs3y4.txt", "r")) )
   {
   printf("Error al abrir el archivo\n");
   }
 
for ( flines = 0 ; fgets(buf, sizeof(buf), fp3) ; ++flines);
 
if ( flines == 0 )
   {
   printf("El archivo esta vacio\n");
   }
 
rline = rand() % (flines);
 
rewind(fp3);
 
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp3);
printf("%s\n", buf);

//printf("%i",rline);



//_____________


if ( ! ( fp4 = fopen("RespuestasBs3y4.txt", "r")) )
   {
   printf("\nError al abrir el archivo\n");
   return(0);
   }
   
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp4);
printf("%s", buf);

scanf("%i",&resp);


if (rline == 1){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 2){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 3){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 4){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 5){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 6){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 7){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 8){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 9){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 10){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 11){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 12){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 13){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 14){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 15){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 16){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}

//printf("\n%i",s);



getchar();
	return (s);
}
