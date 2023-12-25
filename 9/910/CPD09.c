#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student_node 
{
    char name[32];
    int score;
    struct student_node *next;
}student;

int main()
{
    student *a,*b,*c,*current;
    
    a=malloc(sizeof(student));
    strcpy(a->name,"jerry");
    a->score=100;
    a->next=NULL;

    b=malloc(sizeof(student));
    strcpy(b->name,"bright");
    b->score=90;
    b->next=NULL;

    c=malloc(sizeof(student));
    strcpy(c->name,"mary");
    c->score=80;
    c->next=NULL;
    
    a->next=b;
    b->next=c;
    current=a;

    while(current!=NULL){
        printf("學生=%s\n",current->name);
        printf("分數=%d\n\n",current->score);
        current=current->next;
    }
    free(a);
    free(b);
    free(c);

    system("PAUSE");
    return 0;
    

}