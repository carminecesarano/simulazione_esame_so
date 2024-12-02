#ifndef _PRODCONS_H_
#define _PRODCONS_H_

#include <pthread.h>

#define DIM 4

typedef struct {

    int buffer[DIM];

    /* TBD: Definire variabili per la sincronizzazione,
     *      e una variabile "uscita_timer"
     */

} MonitorProdCons;

void inizializza_monitor(MonitorProdCons * m);
void distruggi_monitor(MonitorProdCons * m);
int produci(MonitorProdCons * m, int val);
int consuma(MonitorProdCons * m, int * val);

#endif