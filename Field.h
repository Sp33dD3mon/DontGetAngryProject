#pragma once

#include "Pawn.h"

class Field
{
	public:
		// LOGIC
		int id_;
		Field* nextField_;
		Field* previousField_;
		Pawn* pawnStandingOnThisField_;

		Field(int);
		Field(int, Field*);

		void setNextFieldPointer(Field*);
		void setPreviousFieldPointer(Field*);

		// todo: FOR GRAPHICS
		// int x, y, width, height;


	

};