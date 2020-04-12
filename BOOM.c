#include <stdio.h>

int main ()
{
	
	
	char option,name_1[20],name_2[20],dinero_1,dinero_2;
    int tema;
    
		printf ("Bienvenido a BOOM!!\n Elige la modalidad a la que deseas jugar teniendo en cuenta que:\n -si pulsas 1 jugaras en modo individual.\n -si pulsas 2 jugaras en modo multijugador.\n -pulsa cualquier otra tecla para salir del juego\n");
		scanf ("%c", &option);
		
		switch (option)
{
		case '1': // CASO INDIVIDUAL. El juego será de un único jugador, o grupo, dando una única solución//
			
			printf ("Has elegido el modo individual, escribe tu nombre.\n");
			scanf ("%s", &name_1);
			printf (" PRIMERA PARTE DEL JUEGO:\nINSTRUCCIONES: %s corta el cable de todas las respuestas exceto de la que creas que es la correcta.\n ", name_1);
	
			printf ( "BOMBA BONUS:\nINSTRUCCIONES: %s elije un tema teniendo en cuenta que:\n.1 pertenece a DEPORTES.\n.2 pertenece a HISTORIA\n.3 iremos incluyendo mas.\n Posteriormente, selecciona las 5 respuestas correctas.\n", name_1);

			do
			{
				printf("Introduce una opcion entre las propuestas.\n");
				scanf (" %c", &tema); // En este caso la bomba bonus sería para conseguir 15segundos extra para la bomba final. Una vez juguemos esta, el dinero que llevemos hasta entonces estaría asegurado//
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
	
			printf ("BOMBA FINAL.\n"); //Consiste en contestar durante un minuto(sin contar si se ha conseguido bonus) preguntas de dos opciones. Cada acierto será un +300, cada error -100//
			printf ( "BOMBA PARA EL BOTE\n");
		break;
	
	
		case '2': // CASO MULTIJUGADOR. Se trata de dos grupos, pero dando una única solución por grupo.//
			
			printf ("Has elegido el modo multijugador. Por favor introduce el nombre del jugador 1.\n");
			scanf ("%s",&name_1);
			printf ("Ahora introduce el nombre del jugador 2.\n");
			scanf ("%s", &name_2 );
			printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 1:\nINSTRUCCIONES: %s corta el cable de todas las respuestas excepto de la que creas que es la correcta.\n ", name_1);
			printf (" PRIMERA PARTE DEL JUEGO PARA EL JUGADOR 1:\nINSTRUCCIONES: %s corta el cable de todas las respuestas excepto de la que creas que es la correcta.\n ", name_2);
	
			printf ( "BOMBA BONUS PARA JUGADOR 1:\nINSTRUCCIONES: %s elije un tema teniendo en cuenta que:\n.1 pertenece a DEPORTES.\n.2 pertenece a HISTORIA\n.3 iremos incluyendo mas.\n Posteriormente, selecciona las 5 respuestas correctas.\n", name_1);
			
			do
			{
				printf("Introduce una opcion entre las propuestas.\n");
				scanf (" %c", &tema); // En este caso la bomba bonus sería para conseguir 15segundos extra para la bomba final. Una vez juguemos esta, el dinero que llevemos hasta entonces estaría asegurado//
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
				scanf (" %c", &tema); // En este caso la bomba bonus sería para conseguir 15segundos extra para la bomba final. Una vez juguemos esta, el dinero que llevemos hasta entonces estaría asegurado//
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
		
			
			printf("BOMBA PARA EL BOTE.\n");//como he dicho solo la jugará el que más dinero haya conseguido hasta la bomba anterior.Consistirá en contestar 10 preguntas a lo largo de 2 minutos//
	
	default:
		printf ("HASTA PRONTO.\n");
	break;
}


return 0;
}

