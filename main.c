#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "prodcons.h"

void * produttore(void *);
void * consumatore(void *);

int main() {


    printf("[MAIN] inizializza_monitor\n");

    /* TBD: Creare e inizializzare il monitor */


    printf("[MAIN] pthread_create\n");

    /* TBD: Avviare i thread */



    printf("[MAIN] pthread_join\n");

    /* TBD: Attendere la terminazione dei thread */



    printf("[MAIN] distruzione_monitor\n");

    /* TBD: Disattivazione e deallocazione del monitor */

}


void * produttore(void * p) {

    printf("[MAIN] Avvio thread produttore\n");


    for(int i=0; i<4; i++) {

        int val = rand() % 10;

        printf("[MAIN] Produttore ha generato %d\n", val);

        int ret = /* TBD: Chiamare il metodo di produzione */

        while(ret < 0) {

            sleep(1);

            printf("[MAIN] Produttore ritenta inserimento di %d\n", val);

            ret = /* TBD: Chiamare il metodo di produzione */
        }

    }


    pthread_exit(NULL);
}

void * consumatore(void * p) {

    printf("[MAIN] Avvio thread consumatore\n");


    for(int i=0; i<20; i++) {

        int val;

        int ret = /* TBD: Chiamare il metodo di consumazione */

        printf("[MAIN] Consumatore ha prelevato %d\n", val);

        sleep(2);
    }


    pthread_exit(NULL);
}