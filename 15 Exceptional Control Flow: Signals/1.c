#include<stdio.h> 
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<stdlib.h>
  
int main() 
{ 
    for (int i = 0; i < 10; ++i)
    {
       pid_t pid = fork(); 
       if ( pid == 0 ) 
       { 
          /* The pathname of the file passed to execl() 
             is not defined   */
          printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
          exit(0);
       } 
     
       int status; 
       waitpid(pid, &status, 0); 
       if ( WIFEXITED(status) ) 
       { 
           int exit_status = WEXITSTATUS(status);         
           printf("Exit status of the child was %d\n", exit_status); 
       } 
    }   
    return 0;
}