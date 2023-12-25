#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	double a, b,total;//先宣告total
	printf("請輸入兩個浮點數:");
	scanf("%lf %lf", &a, &b);//長浮點數
	total = a+b;
	printf("total=%f\n", total);
	system("PAUSE");
	return 0;
}
