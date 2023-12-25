#include <stdio.h>
#include <stdlib.h>

void callFun();
int main()
{
	int i;
	for (i=1; i<=5; i++) {
		  callFun();
	}

	system("PAUSE");
	return 0;
}

void callFun()
{
    auto ai=100;
    static int si=100;
	ai++;
	si++;
	printf("ai=%d, si=%d\n", ai, si);
}
