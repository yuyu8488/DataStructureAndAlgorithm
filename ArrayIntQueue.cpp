#include "ArrayIntQueue.h"
#include <cstddef>

void Initialize(ArrayIntQueue* Que, int Size)
{
	Que->Num = 0;
	if ((Que->Array = new int[Size]) == nullptr)
	{
		return;
	}
	Que->Max = Size;
}

void Enque(ArrayIntQueue* Que, int InValue)
{
	if (Que->Num <= Que->Max)
	{
		Que->Array[Que->Num++] = InValue;
	}
}

void Deque(ArrayIntQueue* Que, int* OutValue)
{
	if (Que->Num > 0)
	{
		*OutValue = Que->Array[0];

		for (int i = 1; i < Que->Num; ++i)
		{
			Que->Array[i - 1] = Que->Array[i];
		}
	}	
}
