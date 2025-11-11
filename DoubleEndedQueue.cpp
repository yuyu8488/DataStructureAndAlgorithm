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
	DEQ->Rear = Max - 1;
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
		DEQ->Queue[ (DEQ->Front + DEQ->FrontNum +DEQ->Max) % DEQ->Max ] = Value;
		DEQ->FrontNum++;
	}
	return 0;
}

int EnqueRear(DoubleEndedQueue* DEQ, int Value)
{
	if (DEQ->RearNum + DEQ->FrontNum >= DEQ->Max)
	{
		return -1;
	}
	else
	{
		DEQ->Queue[(DEQ->Rear - DEQ->RearNum + DEQ->Max) % DEQ->Max] = Value;
		DEQ->RearNum++;
	}
}

int DequeFront(DoubleEndedQueue* DEQ, int* Value)
{

	return 0;
}

int DequeRear(DoubleEndedQueue* DEQ, int* Value)
{


	return 0;
}
