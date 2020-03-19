#include <stdio.h>

int main ()
{
printf ("Bienvenido a BOOM!!\n Elige la modalidad a la que deseas jugar teniendo en cuenta que:\n -si pulsas 1 jugaras en modo individual.\n -si pulsas 2 jugaras en modo multijugador.\n -pulsa cualquier otra tecla para salir del juego\n");
char option,name_1[20],name_2[20],tema;
scanf ("%c", &option);
switch (option)
{
	case '1': // CASO INDIVIDUAL. El juego será de un único jugador, o grupo, dando una única solución//
	printf ("Has elegido el modo individual, escribe tu nombre.\n");
	scanf ("%s", &name_1);
	printf (" PRIMERA PARTE DEL JUEGO:\nINSTRUCCIONES: %s corta el cable de todas las respuestas exceto de la que creas que es la correcta.\n ", name_1);
	
	printf ( "BOMBA BONUS:\nINSTRUCCIONES: %s elije un tema teniendo en cuenta que:\n.1 pertenece a DEPORTES.\n.2 pertenece a HISTORIA\n.3 iremos incluyendo más.\n Posteriormente, selecciona las 5 respuestas correctas.\n", name_1);
	scanf (" %c", &tema);
		switch (tema)
		{
			case '1': 
			printf ("DEPORTES\n");
			break;
			
			case '2':
			printf ("HISTORIA\n");
			break;
			
			case '3':
			printf ("IREMOS INCLUYENDO MÁS\n");
			break;
			
			default:
			printf ("%c elija bien el tema.\n");
			break;
		}
	
	printf ( "BOMBA FINAL\n");
	break;
	
	
	case '2': // CASO MULTIJUGADOR. Se trata de dos grupos, pero dando una única solución por grupo.//
	printf ("Has elegido el modo multijugador. Por favor introduce el nombre del jugador 1.\n");
	scanf ("%s",&name_1);
	printf ("Ahora introduce el nombre del jugador 2.\n");
	scanf ("%s", &name_2 );
	break;
	
	
	default:
	printf ("HASTA PRONTO.\n");
	break;
}


return 0;
}

