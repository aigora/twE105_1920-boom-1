#include <stdio.h>
#include <stdlib.h>
#include "Libreriafunciones.h"

/*int temporizador1 ();
int faseinicial ();
int PyR1 ();
int PyR34 ();
int PyRfinal ();
int PyRbonus ();
int acumulador ();*/



typedef struct {
  char nombre[50];
  char apellidos[50];
  int edad;
  int dObtenido;
} ficha;



int main ()
{
	
	FILE *datos;
	datos = fopen("datospartida.txt", "w");
	char option,name_1[20],name_2[20];
	int var,s,dinero_1,dinero_2, bote;
    int tema;
    int t;
    int n;
    ficha persona1;
    ficha persona2;
		printf ("Bienvenido a BOOM!!\n Elige la modalidad a la que deseas jugar teniendo en cuenta que:\n -si pulsas 1 jugaras en modo individual.\n -si pulsas 2 jugaras en modo multijugador.\n -pulsa cualquier otra tecla para salir del juego\n");
		scanf ("%c", &option);
		
			switch (option)
			{
				case '1': // CASO INDIVIDUAL. El juego será de un único jugador, o grupo, dando una única solución//
					
					
					printf ("Has elegido el modo individual, A continuacion, recopilaremos tus datos.\n");
					printf("Nombre:");
					fflush(stdin);
					fgets(persona1.nombre,50,stdin);
					
					fflush (stdin);
  					printf("Apellidos:");
  					fgets(persona1.apellidos,50,stdin);
  					printf("Edad:");
  					scanf("%i",&persona1.edad);
					
						printf (" PRIMERA PARTE DEL JUEGO\nINSTRUCCIONES: %s corta el cable de la respuestas que creas que es la correcta.\n ", persona1.nombre);
								
							printf ("Primera bomba\n");
								
								printf("Juegas por 300 euros\n\n");
								dinero_1=0;
								var=300;			
									//temporizador1 ();
									
									s = PyR1 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Segunda bomba\n");
								
								printf("Juegas por 400 euros\n\n");
								var=400;				
									//temporizador1 ();
									s = PyR1 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Tercera bomba\n");
								
								printf("Juegas por 500 euros\n\n");
								var=500;				
									//temporizador1 ();
									s = PyR34 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Cuarta bomba\n");
							var=600;	
								printf("Juegas por 600 euros\n\n");
													
									//temporizador1 ();
									s = PyR34 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);				
									system("pause");			
		
						
	
					
						printf ("BOMBA BONUS.\n"); //Consiste en contestar 5 preguntas de dos opciones. Cada acierto será un +200, cada error -100//
						
						for(t=0;t<=4;t++){
							s = PyRbonus ();
						}
						dinero_1=acumuladorBB(dinero_1,var,s);
						printf("Llevas acumulado %d\n", dinero_1);
						printf ( "BOMBA FINAL. ¡¡¡¡A POR EL BOTE!!!!\n");
						bote=100000;
						n=0;
						for(t=0;t<=9;t++){
						 s=PyRfinal ();
						 n+=s;
						if (s!=1){
							break;
						}
						}

						if (n!=10){
							dinero_1=dinero_1;
							printf ("BOOM,te has equivocado y te ha estallado la bomba. Te llevas unicamente lo acumulado hasta ahora que son %i euros.\n", dinero_1);							
							printf("Gracias por participar, juega de nuevo cuando quieras.\n");
						}
						else {
						    dinero_1=dinero_1+bote;
							printf ("!!!!ENHORABUENA¡¡¡¡");
							printf ("TE LLEVAS EL BOTE, Y EL DINERO TOTAL QUE HAS OBYENIDO ES NI MAS NI MENOS QUE... %i EUROS.\n",dinero_1);
									
						}
						persona1.dObtenido=dinero_1;
						fprintf(datos,"%s", persona1.nombre);
  						fprintf(datos,"%s", persona1.apellidos);
  						fprintf(datos, "%i\n", persona1.edad);
 						fprintf(datos, "%i\n", persona1.dObtenido);
					break;
	
	
				case '2': // CASO MULTIJUGADOR. Se trata de dos grupos, pero dando una única solución por grupo.//
			
					printf ("Has elegido el modo multijugador. A continuación recogeremos los datos del jugador 1.\n");
						printf("Nombre:");
						fflush(stdin);
						fgets(persona1.nombre,50,stdin);
						
						fflush (stdin);
	  					printf("Apellidos:");
	  					fgets(persona1.apellidos,50,stdin);
	  					printf("Edad:");
	  					scanf("%i",&persona1.edad);
					printf ("Ahora recogeremos los datos del jugador 2.\n");
						printf("Nombre:");
						fflush(stdin);
						fgets(persona2.nombre,50,stdin);
							
						fflush (stdin);
		  				printf("Apellidos:");
		  				fgets(persona2.apellidos,50,stdin);
		  				printf("Edad:");
		  				scanf("%i",&persona2.edad);
								
							printf (" PRIMERA PARTE DEL JUEGO PARA JUGADOR 1\nINSTRUCCIONES: %s corta el cable de la respuestas que creas que es la correcta.\n ", persona1.nombre);
								
							printf ("Primera bomba\n");
								
								printf("Juegas por 300 euros\n\n");
								dinero_1=0;
								var=300;			
									//temporizador1 ();
									
									s = PyR1 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Segunda bomba\n");
								
								printf("Juegas por 400 euros\n\n");
								var=400;				
									//temporizador1 ();
									s = PyR1 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Tercera bomba\n");
								
								printf("Juegas por 500 euros\n\n");
								var=500;				
									//temporizador1 ();
									s = PyR34 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Cuarta bomba\n");
							var=600;	
								printf("Juegas por 600 euros\n\n");
													
									//temporizador1 ();
									s = PyR34 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);				
									system("pause");
							
							printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 2:\nINSTRUCCIONES: %s corta el cable de la respuesta  que creas que es la correcta.\n ", persona2.nombre);
								printf ("Primera bomba\n");
									printf("Juegas por 300 euros\n\n");
									dinero_2=0;
									var=300;			
									s = PyR1 ();
									dinero_2=acumulador2(dinero_2,var,s);
									printf("Actualmente tienes %d euros \n", dinero_2);			
									system("pause");
									
												
								printf("Segunda bomba\n");
								
									printf("Juegas por 400 euros\n\n");
									var=400;				
									//temporizador1 ();
									s = PyR1 ();
									dinero_2=acumulador2(dinero_2,var,s);
									printf("Actualmente tienes %d euros \n", dinero_2);			
									system("pause");
									
												
								printf("Tercera bomba\n");
								
									printf("Juegas por 500 euros\n\n");
									var=500;				
									s = PyR34 ();
									dinero_2=acumulador2(dinero_2,var,s);
									printf("Actualmente tienes %d euros \n", dinero_2);			
									system("pause");
									
												
								printf("Cuarta bomba\n");
									var=600;	
									printf("Juegas por 600 euros\n\n");
									s = PyR34 ();
									dinero_2=acumulador2(dinero_2,var,s);
									printf("Actualmente tienes %d euros \n", dinero_2);				
									system("pause");
							
		
			
							printf ("BOMBA BONUS PARA %s\n", persona1.nombre);
							
							for(t=0;t<=4;t++){
							s = PyRbonus ();
							dinero_1=acumuladorBB(dinero_1, var,s);
							printf("Actualmente tienes %d euros \n", dinero_1);
							}
			
							printf ("BOMBA BONUS PARA %s\n", persona2.nombre);
							
							for(t=0;t<=4;t++){
							s = PyRbonus ();
							dinero_2=acumuladorBB2(dinero_2, var,s);
							printf("Actualmente tienes %d euros \n", dinero_2);
							}
		
			
			
								if (dinero_1>dinero_2){
								
									printf ("Como %s ha obtenido %i y %s ha obtenido %i, pasa a jugar la BOMBA PARA EL BOTE el jugador %s.\n",persona1.nombre,dinero_1,persona2.nombre,dinero_2,persona1.nombre);
									printf("BOMBA PARA EL BOTE.\n");//como he dicho solo la jugará el que más dinero haya conseguido hasta la bomba anterior.Consistirá en contestar 10 preguntas. Hay que acertar todas para conseguir el bote
									bote=100000;
									n=0;
									for(t=0;t<=9;t++){
						 				s=PyRfinal ();
						 			n+=s;
									if (s!=1){
									break;
									}
									}

									if (n!=10){
									dinero_1=dinero_1;
									printf ("BOOM,te has equivocado y te ha estallado la bomba. Te llevas unicamente lo acumulado hasta ahora que son %i euros.\n", dinero_1);							
									printf("Gracias por participar, juega de nuevo cuando quieras.\n");
									}
									else {
						   			 dinero_1=dinero_1+bote;
									printf ("!!!!ENHORABUENA¡¡¡¡");
									printf ("TE LLEVAS EL BOTE, Y EL DINERO TOTAL QUE HAS OBYENIDO ES NI MAS NI MENOS QUE... %i EUROS.\n",dinero_1);
									persona1.dObtenido=dinero_1;
									}
									
										}	
										
										
										else if (dinero_1<dinero_2){
										
													printf ("Como %s ha obtenido %i y %s ha obtenido %i, pasa a jugar la BOMBA PARA EL BOTE el jugador %s.\n",persona2.nombre,dinero_2,persona1.nombre,dinero_1,persona2.nombre);
										bote=100000;
										n=0;
										for(t=0;t<=9;t++){
						 					s=PyRfinal ();
						 				n+=s;
										if (s!=1){
										break;
										}
										}

										if (n!=10){
										dinero_2=dinero_2;
										printf ("BOOM,te has equivocado y te ha estallado la bomba. Te llevas unicamente lo acumulado hasta ahora que son %i euros.\n", dinero_2);							
										printf("Gracias por participar, juega de nuevo cuando quieras.\n");
										}
										else {
						   			 	dinero_2=dinero_2+bote;
										printf ("!!!!ENHORABUENA¡¡¡¡");
										printf ("TE LLEVAS EL BOTE, Y EL DINERO TOTAL QUE HAS OBYENIDO ES NI MAS NI MENOS QUE... %i EUROS.\n",dinero_2);
									
										}
										persona2.dObtenido=dinero_2;
					
										}
										else
											printf ("Como %s y %s habeis obtenido el mismo dinero no optais a la Bomba Bote, ambos os llevais %i euros\n",persona1.nombre,persona2.nombre,dinero_1);
								
												
							
								
							
								
						persona1.dObtenido=dinero_1;
						persona2.dObtenido=dinero_2;		
						fprintf(datos,"%s", persona1.nombre);
  						fprintf(datos,"%s", persona1.apellidos);
  						fprintf(datos, "%i\n", persona1.edad);
 						fprintf(datos, "%i\n", persona1.dObtenido);
						fprintf(datos,"%s", persona2.nombre);
  						fprintf(datos,"%s", persona2.apellidos);
  						fprintf(datos, "%i\n", persona2.edad);
 						fprintf(datos, "%i\n", persona2.dObtenido);					
												
												
				break;
				default:
					printf ("Hasta pronto.\n");
					break;
		}	


return 0;
}


