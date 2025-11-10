#include "DoubleEndedQueue.h"
#include <cstddef>

int Initialize(DoubleEndedQueue* DEQ, int Max)
{
	DEQ->FrontNum = 0;
	DEQ->RearNum = 0;
	if ((DEQ->Queue = new int[ Max ]) == NULL)
	{
		return -1;
	}
	DEQ->Max = Max;
	DEQ->Front = 0;
	DEQ->Rear = 0;
    return 0;
}

int EnqueFront(DoubleEndedQueue* DEQ, int Value)
{
	if (DEQ->FrontNum + DEQ->RearNum >= DEQ->Max)
	{
		return -1;
	}
	else
	{
		DEQ->Queue[ DEQ->Front ] = Value;
		DEQ->Front = ( DEQ->Front + 1 ) % DEQ->Max;
		DEQ->FrontNum++;
	}
	return 0;
}

int EnqueRear(DoubleEndedQueue* DEQ, int Value)
{
	if (DEQ->Num >= DEQ->Max)
	{
		return -1;
	}
	else
	{
		DEQ->Rear = (DEQ->Rear - 1 + DEQ->Max) % DEQ->Max;
		DEQ->Queue[DEQ->Rear] = Value;
		DEQ->Num++;
	}
}

int DequeFront(DoubleEndedQueue* DEQ, int Value)
{
	return 0;
}

int DequeRear(DoubleEndedQueue* DEQ, int Value)
{
	return 0;
}
