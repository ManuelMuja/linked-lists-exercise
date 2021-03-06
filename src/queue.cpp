/*
 *  queue.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
using namespace std;		// string, cout, ...

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
	this->TAIL = otherQueue->getTail();
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
		cout<<"\nWARNING: given position > queue lenght => data appended to tail\n";
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
		cout<<"WARNING: queue is empty => returning 0\n";
		x = 0;
	}
	if ( position > lenght ) {
		cout<<"WARNING: given position >= lenght of queue --> returning last element/n";
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
 * TIPO_DATO Queue::peek()
 * peek head
 *
 */
TIPO_DATO Queue::peek() {
	
	return this->HEAD->getDato();
} // peek head



/*
 * void TIPO_DATO Queue::peek ( int position )
 * peek data from given position
 *
 */
TIPO_DATO Queue::peek ( int position ) {
	TIPO_DATO x;
	pNodo t = this->TEMP;					// salva il puntatore temporaneo
	int pos = 0;
	
	if ( isEmpty ) {
		cout<<"WARNING: queue is empty => returning 0"<<endl;
		x = 0;
	}
	if ( position > lenght ) {
		cout<<"WARNING: given position >= lenght of queue --> returning last element"<<endl;
		x = TAIL->getDato();
	} else {
		for ( TEMP=HEAD; TEMP!=NULL ; TEMP=TEMP->getNext() ) {	// scorre la lista
			if ( pos++ == position ) {							// per trovare la posizione giusta
				x = TEMP->getDato();
				break;
			}
		}	
		this->TEMP = t;
	}
	
	return x;	
} // peek data from given position



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
 * void Queue::setName ( string sName )
 * set a new name for the queue
 *
 */
void Queue::setName ( string sName ) {
	this->name = sName;
} // set a new name for this queue



/*
 * string Queue::getName( )
 * get queue's name
 *
 */
string Queue::getName( ) {
	
	return this->name;
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
	cout<< this->name <<"\t\tl: "<< this->lenght <<endl;
	pNodo t = this->TEMP;
	if (this->isEmpty) {
		cout<<"Queue is empty"<<endl;
	}
	int pos = 0;
	for ( TEMP=HEAD; TEMP!=NULL; TEMP=TEMP->getNext() ) {
		cout<< pos++ <<":\t"<< TEMP->getDato() <<endl;
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

	cout<< this->name <<"\t\tl: "<< this->lenght <<endl;

	while ( pos<beg && pos<lenght && TEMP!=NULL) {
		this->TEMP = this->TEMP->getNext();
		pos++;
	}
	while ( pos>=beg && pos<=end && pos<lenght && TEMP!=NULL) {
		cout<< pos++ <<":\t"<< TEMP->getDato() <<endl;
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
	while ( HEAD != NULL ) {	
		pn = HEAD;
		HEAD = HEAD->getNext();
		delete pn;
		lenght--;
	}
//	HEAD=NULL;
//	delete TAIL;
	TAIL=NULL;
//	lenght=0;
	isEmpty=true;
} // empty queue



/*
 * int Queue::makeArray( TIPO_DATO* tdArray )
 * empty queue
 *
 */
int Queue::queue2array( TIPO_DATO tdArray[] ) {
	pNodo t = this->TEMP;
	int pos = 0;
	
	if (this->isEmpty) {
		cout<<"Queue is empty"<<endl;
		return 0;
	}
	
	for ( TEMP=HEAD; TEMP!=NULL; TEMP=TEMP->getNext() ) {
		tdArray[pos++] = TEMP->getDato();
	}
	this->TEMP = t;
	
	return pos;
} // empty queue



/*
 * pNodo Queue::revert()
 * revert queue
 *
 */
pNodo Queue::revert() {
	pNodo t1, t2;
	if (this->lenght <= 1)
		return this->HEAD;
	// 0, 1;
	if (this->lenght == 2) {
		TAIL->setNext(HEAD);
		HEAD->setNext(NULL);
		HEAD = TAIL;
		TAIL = TAIL->getNext();
	} // 2

	if (this->lenght == 3) {
		t1 = HEAD->getNext();
		TAIL->setNext( t1 );
		t1->setNext( HEAD );
		HEAD->setNext( NULL );
		HEAD = TAIL;
		TAIL = TAIL->getNext();
	} // 3

	if (this->lenght >= 4) {
		t2 = TAIL;
		do {
			for ( t1=HEAD; t1->getNext()!=t2; t1=t1->getNext() );
			t2->setNext(t1);
			t2 = t1;
		} while (t1!=HEAD);
		HEAD->setNext(NULL);
		HEAD = TAIL;
		TAIL = t1;
	} // 4

	return HEAD;
} // revert queue

