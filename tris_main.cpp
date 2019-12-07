/*
 * tris_main.cpp
 *
 *  Created on: 6 dic 2019
 *      Author: AntonioA
 */
#include <iostream>
#include "tris.h"
using namespace antonioa;

int main()
{
	tris t;
	do
	{

		if(t.turn()==1)
			t.insert_X();
		else
			t.insert_O();
		t.show();
	}
	while(!t.check_win() && t.end());
	if(!t.end())
		std::cout<<"The match finished with a draw!"<<std::endl;
	system("PAUSE");
	return 0;
}



