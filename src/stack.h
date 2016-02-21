/*
 *  stack.h
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

class Stack {
	
private:
	pNodo root;
	pNodo top;
	int lenght;
	
public:
	Stack();
	pNodo getTop();
	int setTop ( pNodo );
	int print();
	int push ( TIPO_DATO );
	TIPO_DATO pull();
	int drop();
	int dropn ( int );
	int empty();
	void swap();
	TIPO_DATO sum();
	TIPO_DATO sub();
	TIPO_DATO mul();
	TIPO_DATO div();
	TIPO_DATO mod();
	TIPO_DATO pow();
	int cnt();
	int distance(pNodo, pNodo);
	int getLenght();
	int setLenght ( int );
	int incLenght();
	int decLenght();
};


typedef Stack* pStack;
