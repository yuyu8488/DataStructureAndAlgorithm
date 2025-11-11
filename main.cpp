#pragma once

#include <iostream>
//#include "IntStack.h"
//#include "ArrayIntQueue.h"
//#include "IntQueue.h"
#include "DoubleEndedQueue.h"
int main()
{
	DoubleEndedQueue DEQ;

	Initialize(&DEQ, 10);

	for (int i = 0; i < DEQ.Max; i++)
	{
		std::cout << DEQ.Que[ i ] << "[" << i << "]" << '\n';
	}

	printf("-------------------------------\n");


	int temp;
	for (int i = 0; i < 5; i++)
	{
		EnqueFront(& DEQ, i);
	}

	DequeFront(&DEQ, &temp);
	EnqueRear(& DEQ, 0);
	EnqueRear(& DEQ, 1);
	EnqueRear(& DEQ, 2);
	EnqueRear(& DEQ, 3);
	EnqueRear(& DEQ, 4);
	EnqueRear(& DEQ, 5);
	DequeFront(&DEQ, &temp);
	DequeFront(&DEQ, &temp);
	DequeFront(&DEQ, &temp);
	


	for (int i = 0; i < DEQ.Max; i++)
	{
		std::cout << DEQ.Que[ i ] << "[" << i << "]";

		if (DEQ.Front == i)
		{
			std::cout << "(Front)";
		}
		else if (DEQ.Rear == i)
		{
			std::cout << "(Rear)";
		}
		putchar('\n');
	
	}
}