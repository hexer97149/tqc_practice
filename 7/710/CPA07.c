#include <stdio.h>
#include <stdlib.h>
/* �Y�S���w�qKnum, �h�[�H�w�q��1000 */
#ifndef Knum
#define Knum 1000
#endif
/* �NKnum�Ѱ��w�q, ����A�w�q��200 */
#undef Knum
#define Knum 200

int main () 
{
	/* �L�X�̫᪺Knum�� */
	printf("Knum = %d\n", Knum);
	
	/* �U�C���ܼ�d�Mi�@��8��Bytes, ���O12��Bytes */
	union dataType {
		double d;
		int	 i;
	};
	union dataType dT;
	printf("�п�Jd���ܼƭ�:");
	scanf("%lf", &dT.d); 	
	/* �L�XdT�ܼƤ���d�Mi */
	printf("%f\n", dT.d);
	printf("�п�Ji���ܼƭ�:");
	scanf("%d",&dT.i); 	
	/* �L�XdT�ܼƤ���d�Mi */
	printf("%d \n", dT.i);
	system("PAUSE");
	return 0;
}
