#include <sys/types.h>
//#include <fcnt1.h> nincs ilyen header fileom
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
pid_t pid;
//pid = fork();
int main()
{
    pid_t fork();
    int ppid, pid, gpid;

        ppid=getpid();

        if((pid=fork())==0)
        {
            gpid=getpid();
            exit(0);
        }
        exit(1);
}
