/*Name : Sejal
Roll_Number : 2019102 */


#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
int n=10;

void *child_process( void* args){
	printf("---CHILD PROCESS---\n");
	while(n>-90){
		n--;
		printf("%d\n",n);
	}
} 
int main(){
	pthread_t thread;
	pthread_create(&thread,NULL,&child_process,NULL);
	sleep(1);
	printf("---PARENT PROCESS---\n");
	while(n<100){
		n++;
		printf("%d\n",n);
	}
	pthread_join(thread,NULL);
	return 0;
}
