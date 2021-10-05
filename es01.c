#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
Scrivere un programma che visualizzi il proprio PID e 
quello del padre.
*/

int main()
{	
	printf("Il mio PID e' %d, quello di mio padre e' %d",getpid(),getppid());
	
    return 0;
}
