#include <stdio.h>
#include <stdlib.h>
void sort(int [],int);
int main ()
{

	int data[10]= {3,1,6,9,5,2,7,10,4,8};

	for(int i=1; i<=10; i++) {
		printf("第%d個:%d\n",i,data[i-1]);

	}
	sort(data,10);
	printf("\n");
	for(int i=1; i<=10; i++) {
		printf("第%d個:%d\n",i,data[i-1]);
	}
	system("PAUSE");
	return 0;
}

void sort(int data2[],int n)
{
	int i,j,t;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(data2[j]>data2[j+1]) {
				t=data2[j];
				data2[j]=data2[j+1];
				data2[j+1]=t;
			}
		}

	}
}
