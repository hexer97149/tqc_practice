
#include <stdio.h>
#include <stdlib.h>
struct rect {
    int length, width;
};
int callarea(struct rect *);


int main () 
{

	int area;
	struct rect r1={20, 18};
 	
	area = callarea(&r1);
	
	printf("���x�Ϊ�����%d, �e��%d, ���n��%d\n", r1.length, r1.width, area);
	system("PAUSE");
     return 0;
}

int callarea(struct rect *pr)
{

	return pr->length * pr->width;
}
