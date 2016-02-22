/*
 *  liste.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 11/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include "stdio.h"

#include "nodo.h"
#include "stack.h"
#include "queue.h"
#include "liste.h"



/*
 *  stackTEST
 *
 */
void stackTEST() {
	printf("\nSTACK TEST\n");
	printf("\nInit\n");
	Stack p;
	pStack pp = new Stack;
	
//	printf("\nPrint:\n");
	pp->print();

	printf("\nPush\n");
	int NN=10;
	while(NN--){
		pp->push(NN);
//		printf("\n%d", NN);
		printf( "\n%d", pp->getTop()->getDato() );
	}
	
	printf("\nstackPRINT:\n");
	pp->print();
	
	printf("\nstackpop: ");
	printf("%d\n", pp->pop());
	pp->print();
	
	printf("\nstackSUM\n");
	pp->sum();
	pp->print();
	
	printf("\nstackSUB\n");
	pp->sub();
	pp->print();
	
	printf("\nstackDROP\n");
	pp->drop();
	pp->print();
	
	printf("\nstackMUL\n");
	pp->mul();
	pp->print();
	
//	printf("\nstackSWAP\n");
//	pp->swap();
//	pp->print();
//	
	printf("\nstackDIV\n");
	pp->div();
	pp->print();
	
	printf("\nstackSWAP\n");
	pp->swap();
	pp->print();
	
	printf("\nstackMOD\n");
	pp->mod();
	pp->print();
	
	printf("\nstackEMPTY\n");
	pp->empty();
	pp->print();
	
	printf("\nPush\n");
	pp->push(2);
	pp->push(3);
	pp->print();
	
	printf("\nstackPOW\n");
	pp->pow();
	pp->print();
	
	printf("\n\n\n");
} // stackTEST




/*
 *  queueTEST
 *
 */
void queueTEST() {
	printf("\nSTACK TEST\n");

	printf("\n Init \n");
	pQueue pq = new Queue;
	pq->init();
	
	int NN=10;
	printf("\n Push \n");
	do {
		pq->push(NN);
//		printf("%d\n", NN);
	} while (--NN);
	pq->print();
	
	printf("\n Push '100' into position '3'\n");
	pq->push(100, 3);
	pq->print(2, 5);
	
	printf("\n Pop:\t%d\n",
		   pq->pop()
	);
	pq->print();
	
	printf("\n Pop from position 5:\t%d\n",
		   pq->pop ( 5 )
	);
	pq->print();
	
	printf("\n Empty \n");
	pq-> empty();
	pq->print();
	
	printf("\n\n\n");
} // queueTEST

