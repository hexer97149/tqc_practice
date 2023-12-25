#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int i=1, total=0;
   while (i <= 100)
{       
    i++;
    if(i%2==0){
		total += i;
    }
   } 
   printf("1加到100的總和:%d\n", total);
   system("PAUSE");
   return 0;
}

