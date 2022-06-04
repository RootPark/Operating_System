#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char*argv[]){
	int pid;
	/*fork another process*/
	pid = fork();

	while(1){
		if(pid==0){
			/*child process*/
			printf(1,"Child\n");
			yield();
		}
		else{
			/*parent process*/
			printf(1,"Parent\n");
			yield();
		}
	}

};
