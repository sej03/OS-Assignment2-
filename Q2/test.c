/* Name: Sejal
Roll_Number: 2019102*/

#include <linux/kernel.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

long sh_task_info_syscall(void){
	return syscall(440,getpid(),"abc.txt");
}
int main(int argc, char *argv[]){
	long activity;
	activity=sh_task_info_syscall();
	if(activity<0){
		perror("Sorry, system call failed.");
	}
	else{
		printf("Congratulations, system call works fine");
	}
	return 0;
}
