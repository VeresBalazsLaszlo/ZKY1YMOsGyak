#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid = fork();
	if(pid < 0)
		{
		printf("Fork fail");
		exit(0);
		}
	else if(pid == 0)
	{
	execl("///home/oem/Documents/VB_parent.c/child","child.c",(char *)NULL);//hol,mit
	}
	waitpid(pid, NULL, 0);
    return 0;
}