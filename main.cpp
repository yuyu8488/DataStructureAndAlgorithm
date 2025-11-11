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
		std::cout << DEQ.Queue[ i ] << "[" << i << "]" << '\n';
	}

	printf("-------------------------------\n");

	//EnqueRear(&DEQ, 2);
	//EnqueRear(&DEQ, 3);
	//EnqueRear(&DEQ, 4);
	//EnqueRear(&DEQ, 5);
	//EnqueRear(&DEQ, 6);

	int temp;
	for (int i = 0; i < 5; i++)
	{
		EnqueFront(& DEQ, i);
	}

	EnqueRear(&DEQ, 1);
	EnqueRear(&DEQ, 2);
	EnqueRear(&DEQ, 3);

	DequeRear(&DEQ, &temp);
	DequeRear(&DEQ, &temp);
	EnqueRear(&DEQ, 3);
	EnqueRear(&DEQ, 4);
	DequeRear(&DEQ, &temp);
	DequeRear(&DEQ, &temp);
	DequeRear(&DEQ, &temp);

	for (int i = 0; i < DEQ.Max; i++)
	{
		std::cout << DEQ.Queue[ i ] << "[" << i << "]";
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