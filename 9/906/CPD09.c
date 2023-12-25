#include <stdio.h>
#include <stdlib.h>

int main ()
{	
	typedef struct student{
		char name[32];
		int score;
	}student;
	student data[5];
	for(int i=0; i<5;i++){
		printf("Please input the student's name:");
		scanf("%s",&data[i].name);	
		printf("Please input the student's score:");
		scanf("%d",&data[i].score);
	}
	for(int i=0;i<5;i++){
		printf("%-20s %20d\n",data[i].name,data[i].score);	

	}
	
	system("PAUSE");
	return 0;
}


