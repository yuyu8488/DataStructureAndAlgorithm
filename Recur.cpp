#include "Recur.h"

#include <iostream>
#include <cstdio>
#include <cstring>

#include "IntStack.h"

static char memo[ 128 ][ 1024 ];

// 재귀 호출 제거를 위해 스택을 이용
void RecurStack(int n)
{
	IntStack Stk;
	Initialize(&Stk, 100);
Top:

	if (n > 0)
	{
		Push(&Stk, n);
		n = n - 1;
		goto Top;
	}
	if (!IsEmpty(&Stk))
	{
		Pop(&Stk, &n);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
	Terminate(&Stk);
}

// 중복 호출 해결을 위해 메모이제이션(memoization) 메모기법 활용
void RecurMemo(int n)
{
	if (memo[ n + 1 ][ 0 ] != '\0')
	{
		printf("%s", memo[ n + 1 ]);
	}
	else
	{
		if (n > 0)
		{
			RecurMemo(n - 1);
			printf("%d\n", n);
			RecurMemo(n - 2);
			printf(memo[ n + 1 ], "%s%d\n%s", memo[ n ], n, memo[ n - 1 ]);
		}
		else
		{
			strcpy_s(memo[ n + 1 ], "");
		}
	}


}
