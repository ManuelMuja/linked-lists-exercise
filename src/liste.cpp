/*
 *  liste.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 11/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include "stdio.h"
#include <iostream>
#include <ctime>

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
	printf("\nQUEUE TEST\n");

	printf("\n Init \n");
	pQueue pq = new Queue;
	pQueue pq2= new Queue;
	
	/* clock start */
	std::clock_t begin_time0 = std::clock();

	pq->init();
	pq2->init();
	
	pq->setName("Prima Coda");
	pq2->setName("Seconda Coda\0");
	
	
	int NN=10;
	printf("\n Push \n");
	do {
		pq->push(NN);
//		printf("%d ", NN);
	} while (--NN);
	pq->print();

	printf("\n Push '100' into position '8'\n");
//	std::clock_t begin_time = std::clock();
	pq->push(100, 8);
//	std::cout << "clk: " <<float( std::clock () - begin_time ) << '\n';
	pq->print();
	
	printf("\n Pop:\t%d\n",
		   pq->pop()
	);
	pq->print();
	
	int pos=2;
	printf("\n Pop from position %d:\t%d\n",
		   pos, pq->pop ( pos )
	);
	pq->print();
	
	printf("\n Empty \n");
	pq->empty();
	pq->print();
	
	printf("\n Pushing some number in two queues \n");
	pq->push(1);
	pq->push(2);
	pq->push(3);
	std::clock_t begin_time = std::clock();
	pq2->push(4);
	std::cout << "clk: " <<float( std::clock () - begin_time ) << '\n';
	pq2->push(5);
	pq2->push(6);
	pq->print();
	pq2->print();
	
	printf("\n Pushing \"q2\" in \"q\" \n");
	pq->push(pq2);
	pq->print();
	printf("\n Pushing another number in \"q\" \n");
	pq->push(18);
	pq->print();

	printf("\n Peek top:\t%d\n",
		   pq->peek()
		   );
	pq->print();
	
	pos=4;
	printf("\n Peek from position %d:\t%d\n",
		   pos, pq->peek ( pos )
		   );
	pq->print();
	
	
	/* clock stop */
	std::cout << float( std::clock () - begin_time0 ) << " clock cicles" << '\n';
	std::cout << float( std::clock () - begin_time0 ) /  CLOCKS_PER_SEC * 1E3 << "ms" <<'\n';

	printf("\n\n\n");
} // queueTEST

