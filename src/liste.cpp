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
	
	printf("\nInit\n");
	Stack p;
	pStack pp = new Stack;
	
//	pp->setTop( p.getTop() );

	printf("\nPrint:\n");
//	p.print();

	int NN=10;
	while(NN--){
		pp->push(NN);
		printf("\n%d", NN);
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
	
	printf("\nstackMUL\n");
	pp->mul();
	pp->print();
	
	printf("\nstackSWAP\n");
	pp->swap();
	pp->print();
	
	printf("\nstackDIV\n");
	pp->div();
	pp->print();
	
	printf("\nstackDROP\n");
	pp->drop();
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
	
} // stackTEST




/*
 *  queueTEST
 *
 */
void queueTEST() {
	
} // queueTEST

