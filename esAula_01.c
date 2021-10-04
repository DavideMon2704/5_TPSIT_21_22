#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*Creare un programma in cui:
- il processo padre crea due figli
- ogni figlio stampi il proprio pid
- il secondo processo figlio crea a suo volta un figlio
che stampa il proprio pid, quello del padre e quello del nonno.
- il processo padre di tutti, dopo la creazione dei figli,
stampa i pid dei figli*/
int main(){
	pid_t figlio1;
	pid_t figlio2;
	pid_t padreDiTutti = getpid();
	
	figlio1=fork();
	if(figlio1==0){
		//todo: scrivere codice del figlio 1
		printf("Io sono figlio 1 %d e mio padre e' %d\n",getpid(),getppid());
		exit(0);
	}
	else if(figlio1>0){
		//todo: scrivere il codice del padre
		figlio2 = fork();
		if(figlio2==0){
			//todo: ramo del figlio 2
			printf("Io sono figlio 2 %d e mio padre e' %d\n",getpid(),getppid());
			pid_t figlio2_1=fork();
			if(figlio2_1==0){
				//todo: codice del figlio 2.1
				printf("Io sono il figlio 2.1 con pid = %d e mio padre e' %d e mio nonno e' %d\n",getpid(),getppid(),padreDiTutti);	
			}
			else if(figlio2_1>0){
				//todo: continuazione codice del figlio 2
				sleep(2);
				exit(0);
			}
			
		}
		else if(figlio2>0){
			//todo: ramo del padre
			sleep(5);
			printf("Ho creato due figli %d e %d\n",figlio1,figlio2);
		}
		else{
			printf("Errore");
		}
	}
	else{
		//errore
	}
	
	
	
}