/*
 *  Nodo.cpp
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

#include "stdio.h"
#include "Nodo.h"



/*
 * Constructor
 *
 */
Nodo::Nodo() {
	setNext (NULL);
}

Nodo::Nodo ( TIPO_DATO x, pNodo n ) {
	setDato (x);
	setNext (n);
}

Nodo::Nodo ( TIPO_DATO x ) {
	setDato (x);
	next = NULL;
}

Nodo::Nodo ( pNodo n ) {
	setNext (n);
} // constructor



/*
 * Destructor
 *
 */
Nodo::~Nodo() {
	delete (this);
} // destructor



/*
 * getDato
 *
 */
TIPO_DATO Nodo::getDato() {
	return dato;
} // getDato() {




/*
 * getNext
 *
 */
pNodo Nodo::getNext() {
	return next;
} // getNext



/*
 * setDato
 *
 */
int Nodo::setDato ( TIPO_DATO newDato) {
	dato = newDato;
	
	return 0;
} // setDato



/*
 * setNext
 *
 */
int Nodo::setNext ( pNodo newNext) {
	next = newNext;
	return 0;
} // setNext
