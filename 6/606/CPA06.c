#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main () 
{
    FILE *fptr;
 	char ch;
	fptr=fopen("character.dat", "w");
 	printf("請輸入一字元: ");
	scanf("%c", &ch);
	
	//將一行多餘的字元丟掉
	while (getchar() != '\n') {
		continue;
	}
	
	
	while (ch != '*') 
	{
		fprintf(fptr,"%c", ch);
	 	printf("請輸入一字元: ");
		scanf("%c", &ch);
		//將一行多餘的字元丟掉
	while (getchar() != '\n') {
		continue;
	}	
	}
	
     fclose(fptr);
	
	fptr=fopen("character.dat", "r");
	printf("\n以下是您輸入的資料:\n");
	while (fscanf(fptr,"%c",&ch) != EOF) 
	{
		printf("%3c\n", ch);
	}
	fclose(fptr);
	system("PAUSE");
	return 0;
}

