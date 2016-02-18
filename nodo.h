/*
 *  Nodo.h
 *  Liste
 *
 *  Created by Manuel Iurissevich on 18/02/16.
 *  Copyright 2016 __MyCompanyName__. All rights reserved.
 *
 */

typedef int TIPO_DATO;


class Nodo {
	
private:
	TIPO_DATO dato;
	Nodo* next;
	
public:
	Nodo();
	Nodo (TIPO_DATO);
	Nodo (Nodo*);
	Nodo (TIPO_DATO, Nodo*);
	~Nodo();
	TIPO_DATO getDato();
	Nodo* getNext();
	int setDato( TIPO_DATO );
	int setNext( Nodo* );
}; // nodo


typedef Nodo* pNodo;
