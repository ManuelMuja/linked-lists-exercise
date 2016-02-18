/*
 *  stack.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include "stdio.h"
#include "nodo.h"
#include "stack.h"


/*
 *  Constructor
 *
 */
Stack::Stack ( ) {
	root = NULL;
	top = NULL;
	lenght = 0;
} // constructor



/*
 *  stackPush
 *
 */
int Stack::push ( TIPO_DATO x ) {
	pNodo p;
	
	p->setDato( x );
	p->setNext( this->getTop() );
	this->setTop(p);
	
	return 0;
} // stackPush



/*
 *  stackPull
 *
 */
int Stack::pull ( ) {
	
	if ( this->getTop() != NULL ) {
		return (this->getTop())->getDato();
	}
	
	printf("Err\n");
	return -1;
} // stackPull



/*
 *  stackPrint
 *
 */
int Stack::print ( ) {
	int status=0;
	
	if ( this==NULL ) {
		printf("Stack is empty\n");
	} else {
		pNodo q;
		q = this->getTop();
		/* scorri lista */
		for ( q = this->getTop(); q != NULL; q = q->getNext() ) {
			printf("%d: ", ++status);
			printf("%d\n", q->getDato());
		}
	}
	return status;
} // stackPrint



/*
 *  drop
 *
 */
int Stack::drop ( ) {
	
	pStack p = this;
	pNodo q = p->getTop();
	
	/* scorri lista */
	if ( this != NULL ) {
		this->setTop( q->getNext() );
		delete q;
	} // scorri lista
	
	return p->lenght--;
} // stackDROP



int Stack::dropn ( int n ) {
	
	pStack p = this;
	pNodo q = p->getTop();
	
	/* scorri lista */
	if ( this != NULL ) {
		this->setTop( q->getNext() );
		this->decLenght();
		delete q;
	} // scorri lista
	
	return this->getLenght();
} // drop



/*
 *  stackEMPTY
 *
 */
nodo* stackEMPTY ( nodo *p ) {
	int status=0;
	
	nodo *q;
	
	/* scorri lista */
	while ( p != NULL ) {
		q = p;
		p = p->next;
		status++;
		delete q;
	} // scorri lista
	
	return p;
} // stackEMPTY



/*
 *  stackSWAP
 *
 */
nodo* stackSWAP ( nodo * p ) {
	nodo * q;
	
	if ( p!=NULL) {
		q = p->next;
		if ( q!=NULL) {
			p->next = q->next;
			q->next = p;
		}		
	}
	
	return q;
} // stackSWAP



/*
 *  stackSUM
 *
 */
nodo* stackSUM ( nodo * p ) {
	
	nodo* t = p;
	p = p->next;
	if ( p!=NULL)
		p->dato = t->dato + p->dato;
	
	delete t;
	
	return p;
} // stackSUM



/*
 *  stackSUB
 *
 */
nodo* stackSUB ( nodo * p ) {
	
	nodo* t = p;
	p = p->next;
	if ( p!=NULL)
		p->dato = t->dato - p->dato;
	
	delete t;
	
	return p;
} // stackSUB



/*
 *  stackMUL
 *
 */
nodo* stackMUL ( nodo * p ) {
	
	nodo* t = p;
	p = p->next;
	if ( p!=NULL)
		p->dato = t->dato * p->dato;
	
	delete t;
	
	return p;
} // stackMUL



/*
 *  stackDIV
 *
 */
nodo* stackDIV ( nodo * p ) {
	
	nodo* t = p;
	p = p->next;
	if ( p!=NULL)
		p->dato = t->dato / p->dato;
	
	delete t;
	
	return p;
} // stackDIV



/*
 *  stackMOD
 *
 */
nodo* stackMOD ( nodo * p ) {
	
	nodo* t = p;
	p = p->next;
	if ( p!=NULL)
		p->dato = t->dato % p->dato;
	
	delete t;
	
	return p;
} // stackMOD



/*
 *  stackPOW
 *
 */
TIPO_DATO pow ( ) {
	
	pNodo t = p;
	p = p->next;
	
	
	if ( p!=NULL) {
		int espo = t->dato;
		int base = p->dato;
		
		while(--espo) p->dato *= base;
	}	
	delete t;
	
	return p;
} // stackPOW



/*
 *  stackDistance
 *
 */
int distance ( pNodo p, pNodo q ) {
	int d = 0;
	pNodo t=p;
	
	for (t->next=p; t->next!=NULL; t=t->next) {
		d++;
	}
	
	return d;
} // stackDistance
