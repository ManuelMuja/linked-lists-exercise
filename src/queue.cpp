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
} // init queue



/*
 * void Queue::push()
 * append value to tail
 *
 */
void Queue::push ( TIPO_DATO data ) {
	pNodo pn = new Nodo( data, this->TAIL);
	this->TAIL = pn;
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
	
} // print whole queue
 


/*
 * void Queue::print ( int beg, int end )
 * print from 'beg' to 'end'
 *
 */
void Queue::print ( int beg, int end ) {
	
} // print from 'beg' to 'end'
 


/*
 * void Queue::empty()
 * empty queue
 *
 */
void Queue::empty() {
	
} // empty queue

