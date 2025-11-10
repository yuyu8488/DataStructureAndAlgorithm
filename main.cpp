#pragma once

#include <iostream>
//#include "IntStack.h"
#include "ArrayIntQueue.h"

int main()
{
	ArrayIntQueue Q;
	Initialize(&Q, 10);

	for (int i = 0; i < 10; ++i)
	{
		Enque(&Q, i + 10);
	}

	for (int i = 0; i < Q.Max; i++)
	{
		std::cout << "Value : " << Q.Array[i] << '\n';
	}

	std::cout << "===================" << '\n';
	int DequeValue;
	Deque(&Q, &DequeValue);

	for (int i = 0; i < Q.Max; i++)
	{
		std::cout << "Value : " << Q.Array[i] << '\n';
	}
		

	return 0;
}