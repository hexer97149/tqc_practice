#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int score;
	printf("please input score:");
	scanf("%d",&score);
	while(score<=100&&score>=0){
		switch(score/10){
			case 10:
				printf("grade:A+");
				break;
			case 9:
				printf("grade:A");
				break;
			case 8:
				printf("grade:B");
				break;
			case 7:
				printf("grade:C");
				break;
			case 6:
				printf("grade:D");
				break;
			default:
				printf("grade:E");
		}
		printf("\nplease input score:");
		scanf("%d",&score);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
