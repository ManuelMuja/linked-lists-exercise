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
	this->lenght++;
} // append value to tail



/*
 * void Queue::push ( pQueue )
 * append queue
 *
 */
void Queue::push ( pQueue ) {

} // append queue



/*
 * void Queue::push ( TIPO_DATO data, int position )
 * insert value into given position
 *
 */
void Queue::push ( TIPO_DATO data, int position ) {
	int pos=0;
	pNodo pn;
	
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
	}
	
	// 
	if ( false ) {
		pos++;
		this->lenght++;
		return;
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
	
	return x;
} // pop data from given position



/*
 * void Queue::setHead ( pNodo newHead )
 * set a new head for the queue
 *
 */
void Queue::setHead ( pNodo newHead ) {
	
} // set a new head for the queue
 


/*
 * void Queue::setTail ( pNodo newTail )
 * set a new tail
 *
 */
void Queue::setTail ( pNodo newTail ) {
	
} // set a new tail
 


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
	pNodo t = this->TEMP;
	for ( TEMP=HEAD; TEMP!=NULL; TEMP=TEMP->getNext() ) {
		printf( "%d\n", TEMP->getDato() );
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

	while ( pos<beg && pos<lenght && TEMP!=NULL) {
		this->TEMP = this->TEMP->getNext();
		pos++;
	}
	while ( pos>=beg && pos<=end && pos<lenght && TEMP!=NULL) {
		printf( "%d\n", TEMP->getDato() );
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
	
} // empty queue

