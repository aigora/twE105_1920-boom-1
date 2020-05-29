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
    ficha persona;
    
		printf ("Bienvenido a BOOM!!\n Elige la modalidad a la que deseas jugar teniendo en cuenta que:\n -si pulsas 1 jugaras en modo individual.\n -si pulsas 2 jugaras en modo multijugador.\n -pulsa cualquier otra tecla para salir del juego\n");
		scanf ("%c", &option);
		
			switch (option)
			{
				case '1': // CASO INDIVIDUAL. El juego será de un único jugador, o grupo, dando una única solución//
					
					
					printf ("Has elegido el modo individual, A continuacion, recopilaremos tus datos.\n");
					printf("Nombre:");
					fflush(stdin);
					fgets(persona.nombre,50,stdin);
					//scanf ("%s", &name_1);
					
					fflush (stdin);
  					printf("Apellidos:");
  					fgets(persona.apellidos,50,stdin);
  					printf("Edad:");
  					scanf("%i",&persona.edad);
					
						printf (" PRIMERA PARTE DEL JUEGO\nINSTRUCCIONES: %s corta el cable de todas las respuestas exceto de la que creas que es la correcta.\n ", persona.nombre);
								
							printf ("Primera bomba\n");
								
								printf("Juegas por 300 euros\n\n");
								dinero_1=0;
								var=300;			
									//temporizador1 ();
									
									PyR1 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Segunda bomba\n");
								
								printf("Juegas por 400 euros\n\n");
								var=400;				
									//temporizador1 ();
									PyR1 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Tercera bomba\n");
								
								printf("Juegas por 500 euros\n\n");
								var=500;				
									//temporizador1 ();
									PyR34 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);			
									system("pause");
									
												
							printf("Cuarta bomba\n");
							var=600;	
								printf("Juegas por 600 euros\n\n");
													
									//temporizador1 ();
									PyR34 ();
									dinero_1=acumulador(dinero_1,var,s);
									printf("Actualmente tienes %d euros \n", dinero_1);				
									system("pause");
						break;			
		
						
	
					
						printf ("BOMBA FINAL.\n"); //Consiste en contestar durante un minuto(sin contar si se ha conseguido bonus) preguntas de dos opciones. Cada acierto será un +300, cada error -100//
						
						for(t=0;t<=9;t++){
							PyRbonus ();
						}
						dinero_1=acumuladorBB(dinero_1,var,s);
						printf("Llevas acumulado %d\n", dinero_1);
						printf ( "BOMBA PARA EL BOTE\n");
						bote=1000000;
						for(t=0;t<=9;t++){
							PyRfinal ();
						}
						
						fprintf(datos,"%s", persona.nombre);
  						fprintf(datos,"%s", persona.apellidos);
  						fprintf(datos, "%i\n", persona.edad);
 						fprintf(datos, "%i\n", persona.dObtenido);
					break;
	
	
				case '2': // CASO MULTIJUGADOR. Se trata de dos grupos, pero dando una única solución por grupo.//
			
					printf ("Has elegido el modo multijugador. Por favor introduce el nombre del jugador 1.\n");
					scanf ("%s",&name_1);
						printf ("Ahora introduce el nombre del jugador 2.\n");
						scanf ("%s", &name_2 );
							printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 1:\nINSTRUCCIONES: %s corta el cable de todas las respuestas excepto de la que creas que es la correcta.\n ", name_1);
							
							faseinicial();
							
							printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 2:\nINSTRUCCIONES: %s corta el cable de todas las respuestas excepto de la que creas que es la correcta.\n ", name_2);
							
							faseinicial();
		
			
							printf ("BOMBA FINAL PARA %s\n", name_1);
							
							for(t=0;t<=9;t++){
							PyRfinal ();
							}
			
							printf ("BOMBA FINAL PARA %s\n", name_2);
							
							for(t=0;t<=9;t++){
							PyRfinal ();
							}
		
			
			
								if (dinero_1>dinero_2)
									printf ("Como %s ha obtenido %i y %s ha obtenido %i, pasa a jugar la BOMBA PARA EL BOTE el jugador %s.\n",name_1,dinero_1,name_2,dinero_2,name_1);
								
										else if (dinero_1=dinero_2)
											printf ("Pregunta de desempate\n");
								
												else 
													printf ("Como %s ha obtenido %i y %s ha obtenido %i, pasa a jugar la BOMBA PARA EL BOTE el jugador %s.\n",name_2,dinero_2,name_1,dinero_1,name_2);
							
								
														printf("BOMBA PARA EL BOTE.\n");//como he dicho solo la jugará el que más dinero haya conseguido hasta la bomba anterior.Consistirá en contestar 10 preguntas a lo largo de 2 minutos//
				break;
				default:
					printf ("Hasta pronto.\n");
					break;
		}	


return 0;
}


