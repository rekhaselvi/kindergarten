#include<stdio.h>
void tower(int disc,char start,char tem,char end);
int main()
{
char start='x',tem='y',end='z';
int disc=3;
printf("sequence is:\n");
tower(disc,start,tem,end);
return 0;
}
void tower(int disc,char start,char tem,char end)
{
if(disc==1)
{
printf("disc %d is moved from %c to %c\n",disc,start,end);
return;
}
tower(disc-1,start,end,tem);
printf("disc %d is moved from %c to %c\n",disc,start,end);
tower(disc-1,tem,start,end);
}

