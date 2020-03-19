#include <stdio.h>

int main ()
{
printf ("Bienvenido a BOOM!!\n Elige la modalidad a la que deseas jugar teniendo en cuenta que:\n -si pulsas 1 jugaras en modo individual.\n -si pulsas 2 jugaras en modo multijugador.\n");
char option,name_1,name_2, prueba;
scanf ("%c",&option);
switch (option)
{
	case '1': // CASO INDIVIDUAL. El juego será de un único jugador, o grupo, dando una única solución//
	printf ("Has elegido el modo individual. Por favor introduce como te quieres llamar.\n");
	scanf ("%c", &name_1);
	break;
	
	
	// prueba de github//
	
	
	case '2': // CASO MULTIJUGADOR. Se trata de dos grupos, pero dando una única solución por grupo.//
	printf ("Has elegido el modo multijugador. Por favor introduce el nombre del jugador 1.\n");
	scanf ("%c", &name_1);
	printf ("Ahora introduce el nombre del jugador 2.\n");
	scanf ("%c", &name_2);
	break;
	
	case '3':
	printf ("No tengo ganas de jugar, salir del juego.\n");
	break;
	
	default:
	printf ("HASTA PRONTO.\n");
	break;
}

}
