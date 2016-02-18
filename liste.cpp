/*
 *  liste.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 11/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

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

	printf("\nPrint:\n");
	p.print();

	int NN=10;
	while(NN--){
		p.push(NN);
	}
	
	printf("\nstackPRINT:\n");
	p.print();
	
	printf("\nstackPULL: ");
	printf("%d\n", p.pull());
	p.print();
	
	printf("\nstackSUM\n");

	p.sum();
	p.print();
	
	printf("\nstackSUB\n");
	p.sub();
	p.print();
	
	printf("\nstackMUL\n");
	p.mul();
	p.print();
	
	printf("\nstackSWAP\n");
	p.swap();
	p.print();
	
	printf("\nstackDIV\n");
	p.div();
	p.print();
	
	printf("\nstackDROP\n");
	p.drop();
	p.print();
	
	printf("\nstackSWAP\n");
	p.swap();
	p.print();
	
	printf("\nstackMOD\n");
	p.mod();
	p.print();
	
	printf("\nstackEMPTY\n");
	p.empty();
	p.print();
	
	p.push(2);
	p.push(3);
	p.print();
	printf("\nstackPOW\n");
	p.pow();
	p.print();
	
} // stackTEST



