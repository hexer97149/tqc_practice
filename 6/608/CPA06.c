#include <stdio.h>
#include <stdlib.h>

int main () 
{
     char str[14]="Apple iPhone 4";
	char sttr[]={'i', 'P', 'a', 'd','\0'};
	char *pstr="Apple iPod";
  
	printf("str字串如下: %s\n", str);
	printf("sttr字串如下: %s\n", sttr);

     printf("pstr字串如下: %s\n", pstr);
	system("PAUSE");
     return 0;
}
