#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>

#include "prodcons.h"

/* Dichiarazione di metodo privato, che sarà
 * eseguito da un thread "timer" */
static void * thread_timer(void *);


void inizializza_monitor(MonitorProdCons * m) {

    printf("[MONITOR] Inizializzazione monitor\n");

    /* TBD: Inizializzazione il monitor, e avviare
     *      il thread timer
     */
}

void distruggi_monitor(MonitorProdCons * m) {

    printf("[MONITOR] Distruzione monitor\n");

    /* TBD: Disattivare il monitor, e far
     *      terminare il thread timer tramite
     *      la variabile "uscita_timer"
     */

}

int produci(MonitorProdCons * m, int val) {

    /* TBD: Introdurre la sincronizzazione */

    // PRIMA DELL'ATTESA, SALVA L'ORARIO
    struct timeval t1;
	gettimeofday(&t1,NULL);
    long start_time = t1.tv_sec*1000000 + t1.tv_usec;


    // DOPO L'ATTESA, SALVA DI NUOVO L'ORARIO, E CONTROLLA SE SONO PASSATI 3 SECONDI
    struct timeval t2;
    gettimeofday(&t2,NULL);
    long current_time = t2.tv_sec*1000000 + t2.tv_usec;

    if(current_time - start_time >= 3000000) {

        printf("[MONITOR] Produttore ha atteso oltre 3 secondi, esce\n");

        /* TBD: Il metodo esce dal monitor senza porsi nuovamente 
                in attesa sulla condition variable, e ritorna in uscita
                un valore negativo
            */
    }



    m->buffer[/*TBD*/] = val;

    printf("[MONITOR] Produzione %d\n", val);

    
    return 0;
}

int consuma(MonitorProdCons * m, int * val) {

    /* TBD: Introdurre la sincronizzazione */

    struct timeval t1;
	gettimeofday(&t1,NULL);
    long start_time = t1.tv_sec*1000000 + t1.tv_usec;



        struct timeval t2;
	    gettimeofday(&t2,NULL);
        long current_time = t2.tv_sec*1000000 + t2.tv_usec;

        if(current_time - start_time >= 3000000) {

            printf("[MONITOR] Consumatore ha atteso oltre 3 secondi, esce\n");

            /* TBD: Il metodo esce dal monitor senza porsi nuovamente 
                    in attesa sulla condition variable, e ritorna in uscita
                    un valore negativo
             */
        }



    *val = m->buffer[/*TBD*/];

    printf("[MONITOR] Consumazione %d\n", *val);


    return 0;
}

void * thread_timer(void * p) {

    printf("[MONITOR] Avvio thread timer\n");


    while(1) {

        int uscita = 0;

        sleep(1);


        /* TBD: Il thread timer periodicamente attiva tutti i thread sospesi */


        if(uscita != 0) {
            break;
        }
    }

    printf("[MONITOR] Uscita thread timer\n");

    pthread_exit(NULL);
}