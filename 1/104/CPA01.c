#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int unit;
	double price=23.34; 
	double total;//�O�B�I��

    printf("�аݱz�n�R�X�~ī�G��? ");
	scanf("%d",&unit);
	total = unit*price;
	printf("�ڶR�F%d�~100%%��ī�G��\n", unit);
	printf("��F%lf��", total);//�i�H�[��.6
	system("PAUSE");
	return 0;
}
    