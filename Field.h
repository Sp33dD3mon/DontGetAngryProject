#pragma once

#include "Pawn.h"

class Field
{
	public:
		// LOGIC
		int id;
		Field* nextField;
		Field* previousField;
		Pawn* pawnStandingOnThisField;

		Field(int);
		Field(int, Field*);

		void setNextFieldPointer(Field*);
		void setPreviousFieldPointer(Field*);

		// todo: FOR GRAPHICS
		// int x, y, width, height;


	

};