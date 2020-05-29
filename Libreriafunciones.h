#include "prototipofunc.h"


//

int faseinicial (){
	
	
printf ("FASE INICIAL\n");
		
	printf ("Primera bomba\n");
		
		printf("Juegas por 300 euros\n\n");
						
			//temporizador1 ();
			
			PyR1 ();
						
			system("pause");
			
						
	printf("Segunda bomba\n");
		
		printf("Juegas por 400 euros\n\n");
						
			//temporizador1 ();
			PyR1 ();
						
			system("pause");
			
						
	printf("Tercera bomba\n");
		
		printf("Juegas por 500 euros\n\n");
						
			//temporizador1 ();
			PyR34 ();
						
			system("pause");
			
						
	printf("Cuarta bomba\n");
		
		printf("Juegas por 600 euros\n\n");
							
			//temporizador1 ();
			PyR34 ();
							
			system("pause");
			
	

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
 
rline = rand() % (flines+1);
 
rewind(fp);
 
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp);
printf("%s\n", buf);

printf("%i\n",rline);



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
		case 3: printf("Correcto\n");
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 5){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 6){
	switch (resp){
		case 3: printf("Correcto\n");
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 9){
	switch (resp){
		case 3: printf("Correcto\n");
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
		case 2: printf("Correcto\n");
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
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 14){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 15){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 16){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 17){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 18){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 19){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 20){
	switch (resp){
		case 2: printf("Correcto\n");
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
 
rline = rand() % (flines+1);
 
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
		case 2: printf("Correcto\n");
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 4){
	switch (resp){
		case 4: printf("Correcto\n");
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
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 7){
	switch (resp){
		case 4: printf("Correcto\n");
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
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 10){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 11){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 12){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 13){
	switch (resp){
		case 4: printf("Correcto\n");
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
		case 4: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 16){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 17){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 18){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 19){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 20){
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


//////////////



int PyRfinal (){
	FILE   *fp5;
FILE   *fp6;
char   buf[200];
int    flines;    /* numero de lineas en el archivo */
int    rline;     /* la linea aleatoria para leer */
int    i;
int    resp;
int    k;
int    s;
 
s=0;
srand(time(NULL));
if ( ! ( fp5 = fopen("PreguntasBfinal.txt", "r")) )
   {
   printf("Error al abrir el archivo\n");
   }
 
for ( flines = 0 ; fgets(buf, sizeof(buf), fp5) ; ++flines);
 
if ( flines == 0 )
   {
   printf("El archivo esta vacio\n");
   }
 
rline = rand() % (flines+1);
 
rewind(fp5);
 
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp5);
printf("%s\n", buf);

//printf("%i",rline);



//_____________


if ( ! ( fp6 = fopen("RespuestasBfinal.txt", "r")) )
   {
   printf("\nError al abrir el archivo\n");
   return(0);
   }
   
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp6);
printf("%s", buf);

scanf("%i",&resp);


if (rline == 1){
	switch (resp){
		case 3: printf("Correcto\n");
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
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 5){
	switch (resp){
		case 2: printf("Correcto\n");
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
		case 4: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 8){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 9){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 10){
	switch (resp){
		case 4: printf("Correcto\n");
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
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 13){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 14){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 15){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}

if (rline == 16){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 17){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 18){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 19){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 20){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 21){
	switch (resp){
		case 4: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 22){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 23){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 24){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 25){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 26){
	switch (resp){
		case 3: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 27){
	switch (resp){
		case 4: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 28){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 29){
	switch (resp){
		case 4: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 30){
	switch (resp){
		case 2: printf("Correcto\n");
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

int PyRbonus (){
	FILE   *fp7;
FILE   *fp8;
char   buf[200];
int    flines;    /* numero de lineas en el archivo */
int    rline;     /* la linea aleatoria para leer */
int    i;
int    resp;
int    k;
int    s;
 
s=0;
srand(time(NULL));
if ( ! ( fp7 = fopen("PreguntasBBonus.txt", "r")) )
   {
   printf("Error al abrir el archivo\n");
   }
 
for ( flines = 0 ; fgets(buf, sizeof(buf), fp7) ; ++flines);
 
if ( flines == 0 )
   {
   printf("El archivo esta vacio\n");
   }
 
rline = rand() % (flines+1);
 
rewind(fp7);
 
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp7);
printf("%s\n", buf);

//printf("%i",rline);



//_____________


if ( ! ( fp8 = fopen("RespuestasBBonus.txt", "r")) )
   {
   printf("\nError al abrir el archivo\n");
   return(0);
   }
   
for ( i = 0 ; i < rline  ; ++i )
    fgets(buf, sizeof(buf), fp8);
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 4){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 8){
	switch (resp){
		case 2: printf("Correcto\n");
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 12){
	switch (resp){
		case 2: printf("Correcto\n");
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
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}

if (rline == 16){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 17){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 18){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 19){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 20){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 21){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 22){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 23){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 24){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 25){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 26){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 27){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 28){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 29){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 30){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 31){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 32){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	}
}
if (rline == 33){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
	
	}
}
if (rline == 34){
	switch (resp){
		case 1: printf("Correcto\n");
				s=1;
		break;
		default: printf("incorrecto\n");
				s=2;
	}
}
if (rline == 35){
	switch (resp){
		case 2: printf("Correcto\n");
				s=1;
		break;
		default: printf("Incorrecto\n");
				s=2;
		}
}

getchar();
	return (s);
}

//FUNCION QUE ACUMULA EL DINERO OBTENIDO EN LA FASE INICIAL//
int acumulador (int dinero_1, int var,int s)
{
	if (s==1)
      	dinero_1=dinero_1+var;
    else
      	dinero_1=dinero_1;
      	
    return dinero_1;
}

//FUNCION QUE ACUMULA EL DINERO OBTENIDO EN LA BOMBA BONUS//
int acumuladorBB (int dinero_1, int var,int s)
{
	if (s==1)
      	dinero_1=dinero_1+200;
    else
      	dinero_1=dinero_1-100;
      	
    return dinero_1;
}

