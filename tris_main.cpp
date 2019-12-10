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
	char answer;
	do
	{
		t.play();
		std::cout<<std::endl;
		std::cout<<"Want to play another game? Y/N:";
		std::cin>>answer;
	} while(answer=='Y');
	return 0;
}



