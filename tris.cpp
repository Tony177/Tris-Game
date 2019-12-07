/*
 * tris.cpp
 *
 *  Created on: 6 dic 2019
 *      Author: AntonioA
 */
#include <iostream>
#include <cassert>
#include "tris.h"
using std::cout;
using std::endl;
namespace antonioa
{
	tris::tris()
	{
		for(size_t i=0;i<row;i++)
			for(size_t j=0;j<column;j++)
					board[i][j]='\0';
		player=1;
		round=0;
	}
	void tris::show()
	{
		cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
		cout<<"-----------"<<endl;
		cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
		cout<<"-----------"<<endl;
		cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
			cout<<endl<<endl<<endl<<endl;
	}
	void tris::insert_X()
	{
		int pos;
		cout<<"Insert position where place X:";
		std::cin>>pos;
		cout<<endl;
		switch (pos)
		{
			case 1:
				if(board[0][0]=='\0')
					board[0][0]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 2:
				if(board[0][1]=='\0')
					board[0][1]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 3:
				if(board[0][2]=='\0')
					board[0][2]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 4:
				if(board[1][0]=='\0')
					board[1][0]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 5:
				if(board[1][1]=='\0')
					board[1][1]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 6:
				if(board[1][2]=='\0')
					board[1][2]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 7:
				if(board[2][0]=='\0')
					board[2][0]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 8:
				if(board[2][1]=='\0')
					board[2][1]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 9:
				if(board[2][2]=='\0')
					board[2][2]='X';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			default:
				cout<<"Wrong selection!"<<endl;
				return;
		}
		round++;
		player=0;
	}
	void tris::insert_O()
		{
			int pos=0;
			cout<<"Insert position where place O:";
			std::cin>>pos;
			switch (pos)
			{
			case 1:
				if(board[0][0]=='\0')
					board[0][0]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 2:
				if(board[0][1]=='\0')
					board[0][1]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 3:
				if(board[0][2]=='\0')
					board[0][2]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 4:
				if(board[1][0]=='\0')
					board[1][0]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 5:
				if(board[1][1]=='\0')
					board[1][1]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 6:
				if(board[1][2]=='\0')
					board[1][2]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 7:
				if(board[2][0]=='\0')
					board[2][0]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 8:
				if(board[2][1]=='\0')
					board[2][1]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			case 9:
				if(board[2][2]=='\0')
					board[2][2]='O';
				else
				{
					cout<<"Not empty position!"<<endl;
					return;
				}
				break;
			default:
				cout<<"Wrong selection!"<<endl;
				return;
			}
			round++;
			player=1;
		}
	bool tris::check_win()
	{
		for(size_t i=0;i<row;i++)
			if(value(i,0)!='\0' && value(i,0)==value(i,1) && value(i,0)==value(i,2))
			{
				if(value(i,0)=='X')
					cout<<"Player X win!"<<endl;
				else
					cout<<"Player O win!"<<endl;
				return true;
			}
		for(size_t j=0;j<column;j++)
			if(value(0,j)!='\0' && value(0,j)==value(1,j) && value(0,j)==value(2,j))
			{
				if(value(0,j)=='X')
					cout<<"Player X win!"<<endl;
				else
					cout<<"Player O win!"<<endl;
				return true;
			}
		if(value(0,0)!='\0' && value(0,0)==value(1,1)&& value(0,0)==value(2,2))
		{
			if(value(0,0)=='X')
				cout<<"Player X win!"<<endl;
			else
				cout<<"Player O win!"<<endl;
			return true;
		}
		if(value(0,2)!='\0' && value(0,2)==value(1,1)&& value(0,2)==value(2,0))
		{
			if(value(0,2)=='X')
				cout<<"Player X win!"<<endl;
			else
				cout<<"Player O win!"<<endl;
			return true;
		}
	return false;

	}
}




