#include<stdio.h> 
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
// #include "csapp.h"
  
int main() 
{ 
   pid_t pid;  /*Declaring a process id*/
   if ((pid = fork()) == 0) /*Creating a process ID using fork function and checking if the ID is zero or not*/
   {
     pause(); /*Wait for the signal to arrive*/
     printf("control shouldn't reach here\n");
     exit(0);/*Stoping the process*/
   }

   kill(pid,SIGKILL); /*Parent sends kill signal to the parent*/
   exit(0); /*Stops the process*/
   
   return 0;
}
