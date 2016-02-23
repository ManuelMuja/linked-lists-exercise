/*
 *  queue.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include "stdio.h"			// NULL, printf()
#include "nodo.h"
#include "queue.h"



/*
 * void Queue::init()
 * init queue
 *
 */
void Queue::init() {
	this->HEAD = NULL;
	this->TAIL = NULL;
	this->TEMP = NULL;
	this->lenght = 0;
	this->isEmpty = true;
	this->name[1]='\0';
} // init queue



/*
 * void Queue::push()
 * append value to tail
 *
 */
void Queue::push ( TIPO_DATO d ) {
	pNodo pn;
	
	if ( this->lenght==0 ) {			// if queue is empty
		pn = new Nodo(d, NULL);
		this->TAIL = pn;
		this->HEAD = pn;
	} else {
		pn = new Nodo (d, NULL);		// if queue is not empty
		this->TAIL->setNext(pn);
		this->TAIL = pn;
	}
	this->isEmpty = false;
	this->lenght++;
} // append value to tail



/*
 * void Queue::push ( pQueue )
 * append queue
 *
 */
void Queue::push ( pQueue otherQueue) {
	this->TAIL->setNext( otherQueue->getHead() );
	this->setLenght( this->lenght + otherQueue->getLenght() );
} // append queue



/*
 * void Queue::push ( TIPO_DATO data, int position )
 * insert value into given position
 *
 */
void Queue::push ( TIPO_DATO data, int position ) {
	int pos=0;
	pNodo pn, pnp;			// puntatori al nodo da estrarre e a quello precedente
	pNodo t;
	
	//
	if( position==0 ) {
		this->HEAD = pn;
		pn = new Nodo (data, NULL);
		this->isEmpty = false;
		this->lenght++;
		return;
	}
	//
	if ( position > this->lenght ) {
		printf("\nWARNING: given position > queue lenght => data appended to tail\n");
		pn = new Nodo (data, this->TAIL);
		this->TAIL;
		this->lenght++;
		this->isEmpty = false;
		return;
	} else {
		t = this->TEMP;
		this->TEMP = this->HEAD;
		do {
			pos++;
			pnp = TEMP;
			TEMP = TEMP->getNext();
		} while ( pos < position );
		pn = new Nodo (data, this->TEMP);
		pnp->setNext( pn );
		this->isEmpty = false;
		this->lenght++;
		pn = this->TEMP;
		this->TEMP = t;
	}
} // insert value into given position



/*
 * void Queue::push ( pQueue, int position )
 * insert queue
 *
 */
void Queue::push ( pQueue, int position ) {
	
} // insert queue



/*
 * TIPO_DATO Queue::pop()
 * pop head
 *
 */
TIPO_DATO Queue::pop() {
	TIPO_DATO x;
	pNodo pn = this->HEAD;
	x = pn->getDato();
	HEAD = HEAD->getNext();
	this->lenght--;
	if( this->lenght <= 0 ) this->isEmpty = true;
	if (this->HEAD==NULL) {
		this->TAIL = NULL;
		this->isEmpty = true;
	}
	delete pn;
	return x;	
} // pop head



/*
 * void TIPO_DATO Queue::pop ( int position )
 * pop data from given position
 *
 */
TIPO_DATO Queue::pop ( int position ) {
	TIPO_DATO x;
	pNodo pn, pnp;							// puntatori al nodo da estrarre e a quello precedente
	pNodo t = this->TEMP;					// salva il puntatore temporaneo
	int pos = 0;
	
	if ( isEmpty ) {
		printf("WARNING: queue is empty => returning 0");
		x = 0;
	}
	if ( position > lenght ) {
		printf("WARNING: given position >= lenght of queue --> returning last element");
		x = TAIL->getDato();
	} else {
		pnp=HEAD;
		for ( TEMP=HEAD; TEMP!=NULL ; TEMP=TEMP->getNext() ) {	// scorre la lista
			if ( pos++ == position ) {							// per trovare la posizione giusta
				x = TEMP->getDato();
				pn = TEMP;
				pnp->setNext( TEMP->getNext() );
				lenght--;
				break;
			}
			if ( pos > 1 ) pnp = TEMP;			
		}	
		this->TEMP = t;
		
		if (TEMP==HEAD) {
			HEAD=HEAD->getNext();
		}
		if (TEMP==TAIL) {
			HEAD=HEAD->getNext();
		}
		
	}

	
	delete pn;
	return x;	
} // pop data from given position



/*
 * void Queue::setHead ( pNodo newHead )
 * set a new head for the queue
 *
 */
void Queue::setHead ( pNodo newHead ) {
	this->HEAD = newHead;
} // set a new head for the queue



/*
 * void Queue::setTail ( pNodo newTail )
 * set a new tail
 *
 */
void Queue::setTail ( pNodo newTail ) {
	this->TAIL = newTail;
} // set a new tail



/*
 * pNodo Queue::getHead ( )
 * get head
 *
 */
pNodo Queue::getHead ( ) {
	return HEAD;
} // get head 



/*
 * pNodo Queue::getTail ( )
 * get tail
 *
 */
pNodo Queue::getTail ( ) {
	return TAIL;
} // get tail



/*
 * void Queue::setLenght ( int newLenght )
 * set a new lenght for the queue
 *
 */
void Queue::setLenght ( int newLenght ) {
	this->lenght = newLenght;
} // set a new lenght for this queue



/*
 * int Queue::getLenght( )
 * set a new tail
 *
 */
int Queue::getLenght( ) {
	return this->lenght;
} // get lenght of this queue



/*
 * void Queue::setLenght ( int newLenght )
 * set a new lenght for the queue
 *
 */
void Queue::setName ( char* sName ) {
	int cntChar=0;
	char c;
	do {
		c = sName[cntChar];
		this->name[cntChar] = c;
		cntChar++;
	} while ( c != '\0' );
} // set a new name for this queue



/*
 * int Queue::getLenght( )
 * set a new tail
 *
 */
int Queue::getName( char* sName ) {
	int cntChar=0;
	char c;
	do {
		c = this->name[cntChar];
		sName[cntChar] = c;
		cntChar++;
	} while ( c != '\0' );
	
	return cntChar;
} // get name of this queue



/*
 * void Queue::shift()
 * shift by one step
 *
 */
void Queue::shift() {
	
} // shift by one step

 


/*
 * void Queue::shift ( int steps )
 * shift by given steps
 *
 */
void Queue::shift ( int steps ) {
	
} // shift by given steps



/*
 * void Queue::print()
 * print whole queue
 *
 */
void Queue::print() {
	printf("%s\n", this->name);
	pNodo t = this->TEMP;
	if (this->isEmpty) {
		printf("Queue is empty\n");
	}
	int pos = 0;
	for ( TEMP=HEAD; TEMP!=NULL; TEMP=TEMP->getNext() ) {
		printf( "%d:\t%d\n", pos++, TEMP->getDato() );
	}
	this->TEMP = t;
} // print whole queue
 


/*
 * void Queue::print ( int beg, int end )
 * print from 'beg' to 'end'
 *
 */
void Queue::print ( int beg, int end ) {
	pNodo t = this->TEMP;
	this->TEMP=HEAD;
	int pos = 0;

	printf("%s\n", this->name);

	while ( pos<beg && pos<lenght && TEMP!=NULL) {
		this->TEMP = this->TEMP->getNext();
		pos++;
	}
	while ( pos>=beg && pos<=end && pos<lenght && TEMP!=NULL) {
		printf( "%d:\t%d\n", pos, TEMP->getDato() );
		this->TEMP = this->TEMP->getNext();
		pos++;
	}
	
	this->TEMP = t;	
} // print from 'beg' to 'end'
 


/*
 * void Queue::empty()
 * empty queue
 *
 */
void Queue::empty() {
	pNodo pn;
	while ( HEAD < TAIL ) {
		pn = HEAD;
		HEAD = HEAD->getNext();
		delete pn;
		lenght--;
	}
	HEAD=NULL;
	TAIL=NULL;
	lenght=0;
	isEmpty=true;
} // empty queue

