/*
 * tris.h
 *
 *  Created on: 6 dic 2019
 *      Author: AntonioA
 */

#ifndef TRIS_H_
#define TRIS_H_
#include <iostream>

namespace antonioa
{
	class tris
	{
	public:
		static const size_t column=3;
		static const size_t row=3;
		//MODIFICATION MEMBER FUNCTION
		tris();
		void show();
		void insert_X();
		void insert_O();
		bool check_win();
		//CONSTANT MEMBER FUNCTION
		int turn() const {return player;};
		char value(size_t i,size_t j) const {return board[i][j];};
	private:
		char board[row][column];
		int player; // X player its 1 and  O player its 0
	};
}





#endif /* TRIS_H_ */
