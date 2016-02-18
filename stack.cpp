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
int Stack::empty ( ) {
	pStack t;
	
	/* scorri lista */
	while ( this->getTop() != NULL ) {
		t = this;
		top = top->getNext();
		decLenght();
		delete t;
	} // scorri lista
	
	return lenght;
} // stackEMPTY



/*
 *  stackSWAP
 *
 */
void Stack::swap ( ) {
	pStack p = this;
	pNodo t = p->top;
	pNodo q;
	
	if ( t != NULL ) {
		q = t->getNext();
		if ( q!=NULL) {
			t->setNext( q->getNext() );
			q->setNext( t );
		}		
	}
	
} // stackSWAP



/*
 *  summ
 *
 */
TIPO_DATO Stack::sum ( ) {
	pStack p;
	pNodo t;
	TIPO_DATO a, b, c;
	
	t = top;								// copy pointer to top of the stack and 
	setTop( top->getNext() );				// shift pointer to stack
	
	if ( top->getNext() != NULL ) {
		a = t->getDato();
		b = top->getDato();
		c = a+b;
		t->setDato( c );
		delete t;
	}
	
	return c;
} // summ



/*
 *  subtract
 *
 */
TIPO_DATO Stack::sub ( ) {
	pNodo t;
	TIPO_DATO a, b, c;
	
	t = top;								// copy pointer to top of the stack and 
	setTop( top->getNext() );				// shift pointer to stack
	
	if ( top->getNext() != NULL ) {
		a = t->getDato();
		b = top->getDato();
		c = a-b;
		t->setDato( c );
		delete t;
	}
	
	return c;
} // subtract



/*
 *  multiply
 *
 */
TIPO_DATO Stack::mul ( ) {
	pNodo t;
	TIPO_DATO a, b, c;
	
	t = top;								// copy pointer to top of the stack and 
	setTop( top->getNext() );				// shift pointer to stack
	
	if ( top->getNext() != NULL ) {
		a = t->getDato();
		b = top->getDato();
		c = a*b;							// compute result
		t->setDato( c );
		delete t;							// free memory
	}
	
	return c;
} // multiply



/*
 *  divide
 *
 */
TIPO_DATO Stack::div ( ) {
	pNodo t;
	TIPO_DATO ret;
	
	t = top;								// copy pointer to top of the stack and 
	setTop( top->getNext() );				// shift pointer to stack
	
	if ( top->getNext() != NULL ) {
		ret = t->getDato() * top->getDato();	// compute result
		t->setDato( ret );
		delete t;							// free memory
	}
	
	return ret;
} // divide



/*
 *  mod
 *
 */
TIPO_DATO Stack::mod ( ) {
	pNodo t;
	TIPO_DATO ret;
	
	t = top;								// copy pointer to top of the stack and 
	setTop( top->getNext() );				// shift pointer to stack
	
	if ( top->getNext() != NULL ) {
		ret = t->getDato() % top->getDato();	// compute result
		t->setDato( ret );
		delete t;							// free memory
	}
	
	return ret;
} // mod



/*
 *  stackPOW
 *
 */
//TIPO_DATO pow ( ) {
//	
//	pNodo t = this;
//	p = p->next;
//	
//	
//	if ( p!=NULL) {
//		int espo = t->getDato();
//		int base = p->getDato();
//		
//		while(--espo) p->gatDato() *= base;
//	}	
//	delete t;
//	
//	return p;
//} // stackPOW



/*
 *  stackDistance
 *
 */
int Stack::distance ( pNodo p, pNodo q ) {
	int d = 0;
	pNodo t=p;
	
	for (t->setNext(p); t->getNext()!=NULL; t=t->getNext()) {
		d++;
	}
	
	return d;
} // stackDistance



/*
 *  getLenght
 *
 */
int Stack::getLenght ( ) {

	return this->lenght;
} // getLenght



/*
 *  decLenght
 *
 */
int Stack::decLenght ( ) {

	return this->lenght--;
} // decLenght



/*
 *  incLenght
 *
 */
int Stack::incLenght ( ) {

	return this->lenght++;
} // incLenght
