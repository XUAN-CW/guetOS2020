#include<stdio.h>
#include<unistd.h>
main( )
{
        int pid;    
        pid=fork( );         /*创建子进程*/
switch(pid) 
{
               case  -1:                          /*创建失败*/
                       printf("fork fail!\n");
                       exit(1);
               case  0:                                 /*子进程*/
                       execl("/bin/ls","ls","-1","-color",NULL);  
                       printf("exec fail!\n");
                       exit(1);
               default:                                 /*父进程*/
                       wait(NULL);                  /*同步*/
                       printf("ls completed !\n");
                       exit(0);
        }
}
