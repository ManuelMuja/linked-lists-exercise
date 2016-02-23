/*
 *  queue.h
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#define MAX_WORD_LENGTH 16
#define MAX_ARRAY_LENGTH 1024

class Queue {
	
private:
	pNodo HEAD;
	pNodo TAIL;
	pNodo TEMP;
	int lenght;
	bool isEmpty;
	char name[MAX_WORD_LENGTH];
	
public:
	void init();						// init queue
	void push ( TIPO_DATO data );		// append value to tail
	void push ( Queue* );				// append queue
	void push ( TIPO_DATO data, int position );		// insert value into given position
	void push ( Queue*, int position );				// TO DO: insert queue
	void subs ( TIPO_DATO data );		// substiture value in HEAD
	void subs ( TIPO_DATO data, int position );		// substiture value into given position
	TIPO_DATO pop();					// pop head
	TIPO_DATO pop ( int position );		// pop data from given position
	TIPO_DATO peek();					// same as pop but
	TIPO_DATO peek ( int position );	// does not modifie the queue
	void setHead ( pNodo newHead );		// set new head for this queue
	void setTail ( pNodo newTail );		// set new tail
	void setLenght ( int newLenght );	// set new lenght
	void setName ( char* newName );		// set new name
	pNodo getHead();					// get pointer to HEAD node of this queue
	pNodo getTail();					// get pointer to TAIL node
	int	getLenght();					// get lenght of this queue
	int	getName(char*);					// get name of this queue
	void shift();						// TO DO: shift by one step
	void shift ( int steps );			// TO DO:shift by given steps 
	void print();						// print whole queue
	void print ( int beg, int end );	// print from 'beg' to 'end'
	void empty();						// NO GOOD: empty queue
}; // Queue

typedef Queue* pQueue;

