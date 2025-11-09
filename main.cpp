#pragma once

#include "IntStack.h"

int main()
{
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		return 1;
	}

	Push(&s, 3);
	Push(&s, 13);
	Push(&s, 2);

	int PopValue;
	Pop(&s, &PopValue);

	int PeekValue;
	Peek(&s, &PeekValue);

	Terminate(&s);

	return 0;
}