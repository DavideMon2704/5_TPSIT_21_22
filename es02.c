#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
Modificare il programma precedente, facendo in modo
che si sospenda per un numero di secondi richiesto in 
input prima di terminare. 
Verificare la presenza del processo in esecuzione 
(da un’altra shell)
con il comando ps -e.

*/

int main()
{	
	int secondi;
	
	printf("Inserisci il numero di secondi che vuoi dormire: ");
	scanf("%d",&secondi);
	printf("Il mio PID e' %d, quello di mio padre e' %d",getpid(),getppid());
	printf("\n vado a dormire per %d secondi\n",secondi);
	sleep(secondi);

    return 0;
}
