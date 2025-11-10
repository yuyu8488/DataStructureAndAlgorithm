#ifndef ___IntQueue
#define ___IntQueue

struct IntQueue
{
	int max;
	int num;
	int front;
	int rear;
	int* que;
};

int Initialize(IntQueue* q, int max);

int Enque(IntQueue* q, int x);

int Deque(IntQueue* q, int* x);

int Peek(const IntQueue* q, int* x);

void Clear(IntQueue* q);

int Capacity(const IntQueue* q);

int Size(const IntQueue* q);

int IsEmpty(const IntQueue* q);

int IsFull(const IntQueue* q);

int Search(const IntQueue* q, int x);

// 찾은 데이터가 맨 앞의 요소로부터 상대적으로 몇 번째 위치에 있는지에 대한 인덱스값 반환.
int Search2(const IntQueue& q, int x);

void Print(const IntQueue* q);

void Terminate(IntQueue* q);

#endif