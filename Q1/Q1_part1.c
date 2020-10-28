/*Name : Sejal
Roll_Number : 2019102 */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
int n=10;
int main(){
	int s;
	int f=fork();
	if(f==0){
		printf("---CHILD PROCESS---\n");
		while(n>-90){
			n--;
			printf("%d\n",n);
		}
	}
	else{
		waitpid(f,&s,0);
		printf("---PARENT PROCESS---\n");
		while(n<100){
			n++;
			printf("%d\n",n);
		}
		
	}
	
}
