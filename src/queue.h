/*
 *  queue.h
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

class Queue {
	
private:
	pNodo HEAD;
	pNodo TAIL;
	pNodo TEMP;
	int lenght;
	bool isEmpty;
	
public:
	void init();						// init queue
	void push ( TIPO_DATO data );		// append value to tail
	void push ( Queue* );				// append queue
	void push ( TIPO_DATO data, int position );		// insert value into given position
	void push ( Queue*, int position );				// TO DO: insert queue
	TIPO_DATO pop();					// pop head
	TIPO_DATO pop ( int position );		// pop data from given position
	void setHead ( pNodo newHead );		// set new head for this queue
	void setTail ( pNodo newTail );		// set new tail
	void setLenght ( int newLenght );	// set new lenght
	pNodo getHead();					// get pointer to HEAD node of this queue
	pNodo getTail();					// get pointer to TAIL node
	int	getLenght();					// get lenght of this queue
	void shift();						// TO DO: shift by one step
	void shift ( int steps );			// TO DO:shift by given steps 
	void print();						// print whole queue
	void print ( int beg, int end );	// print from 'beg' to 'end'
	void empty();						// empty queue
}; // Queue

typedef Queue* pQueue;

