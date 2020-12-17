#include <stdio.h>
main( )
{
int p1,p2,i;
while((p1=fork( ))== -1);          /*创建子进程p1*/
if (p1==0)
  for(i=0;i<10;i++)
printf("daughter  %d\n",i);
else
{
                while((p2=fork( ))== -1);   /*创建子进程p2*/
if(p2==0)
                  for(i=0;i<10;i++)
                       printf("son  %d\n",i);
else
                  for(i=0;i<10;i++)
                       printf("parent  %d\n",i);
}
}
