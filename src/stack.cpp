/*
 *  stack.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include "stdio.h"			// NULL
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
 *  getTop
 *
 */
pNodo Stack::getTop ( ) {
	
	return top;
} // constructor



/*
 *  setTop
 *
 */
int Stack::setTop ( pNodo t ) {
	top = t;
	
	return lenght;
} // constructor



/*
 *  print
 *
 */
int Stack::print ( ) {
	int status=0;
	
	if ( top==NULL ) {
		printf("Stack is empty\n");
	} else {
		pNodo q;
		q = this->getTop();
		/* scorri lista */
		for ( q = this->getTop(); q != NULL; q = q->getNext() ) {
			printf("%d:\t%x:\t", ++status, &(*q));
			printf("%d,\t%x\n", q->getDato(), q->getNext());
		}
	}
	return status;
} // print



/*
 *  stackPush
 *
 */
int Stack::push ( TIPO_DATO x ) {
	pNodo p = new Nodo ( x, top );
	
//	p->setDato( x );
//	p->setNext( this->getTop() );
	this->setTop(p);
	
	return 0;
} // stackPush



/*
 *  stackpop
 *
 */
int Stack::pop ( ) {
	
	if ( this->getTop() != NULL ) {
		TIPO_DATO ret = (this->getTop())->getDato();
		pNodo temp = top;
		setTop(top->getNext());
		delete temp;
		return ret;
	}
	
	printf("Err\n");
	return -1;
} // stackpop



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
	pNodo t;
	
	/* scorri lista */
	while ( top->getNext() != NULL ) {
		t = top;
		setTop(top->getNext());
		decLenght();
		delete t;
	} // scorri lista
	t = top;
	setTop(NULL);
	decLenght();
	delete t;
	
	return lenght;
} // stackEMPTY



/*
 *  stackSWAP
 *
 */
void Stack::swap ( ) {
	pNodo q;
	
	if ( top != NULL ) {
		q = top->getNext();
		if ( q != NULL) {
			top->setNext(q->getNext());
			q->setNext( top );
			setTop(q);
		}		
	}
	
} // stackSWAP



/*
 *  summ
 *
 */
TIPO_DATO Stack::sum ( ) {
	pNodo t;
	TIPO_DATO a, b, c;
	
	t = top;								// copy pointer to top of the stack and 
	setTop( top->getNext() );				// shift pointer to stack
	
	if ( top->getNext() != NULL ) {
		a = t->getDato();
		b = top->getDato();
		c = a+b;
		top->setDato( c );
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
		top->setDato( c );
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
		top->setDato( c );
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
		ret = t->getDato() / top->getDato();	// compute result
		top->setDato( ret );
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
		top->setDato( ret );
		delete t;							// free memory
	}
	
	return ret;
} // mod



/*
 *  power
 *
 */
TIPO_DATO Stack::pow ( ) {
	pNodo t;
	TIPO_DATO ret;
	TIPO_DATO base;
	int espo;
	
	if ( top->getNext() != NULL ) {	
		t = top;								// copy pointer to top of the stack and 
		setTop( top->getNext() );				// shift pointer to stack
		//	top = top->getNext();
//		ret = top->getDato();
		espo = t->getDato();
		base = ret = top->getDato();
		while (--espo) ret *= base;
		top->setDato(ret);
		delete t;
	} // 
	
	return ret;
} // power



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
