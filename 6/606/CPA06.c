#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main () 
{
    FILE *fptr;
 	char ch;
	fptr=fopen("character.dat", "w");
 	printf("�п�J�@�r��: ");
	scanf("%c", &ch);
	
	//�N�@��h�l���r���ᱼ
	while (getchar() != '\n') {
		continue;
	}
	
	
	while (ch != '*') 
	{
		fprintf(fptr,"%c", ch);
	 	printf("�п�J�@�r��: ");
		scanf("%c", &ch);
		//�N�@��h�l���r���ᱼ
	while (getchar() != '\n') {
		continue;
	}	
	}
	
     fclose(fptr);
	
	fptr=fopen("character.dat", "r");
	printf("\n�H�U�O�z��J�����:\n");
	while (fscanf(fptr,"%c",&ch) != EOF) 
	{
		printf("%3c\n", ch);
	}
	fclose(fptr);
	system("PAUSE");
	return 0;
}

