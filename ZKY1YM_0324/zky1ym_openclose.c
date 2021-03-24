#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/file.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd, ret; //fd file description ret olvas�s �r�s pozicion�l�s stb
    char buf[32];

    buf[0]=0;
    //O_RDONLY - O_RDWR - O_WONLY --RDWR KELL
    //O_APPEND
    //O_CREATE
    //O_TRUNC
    fd=open("zky1ym.txt",O_RDWR);
    if(fd == -1)
    {
        perror("open() hiba!");
        exit(-1);
    }

    ret = read(fd,buf,32); //ret: mennyi siker�lt beolvasni
    printf("read() olvasott %d byteot, ami a kovetkezo: %s\n",ret,buf);
    strcpy(buf,"ZKY1YM");

    //pozicion�l�s
    ret=lseek(fd,0,SEEK_SET); //SEEK_CUR, SEEK_END -ret: hova �lljon be t�nylegesen
    printf("lseek() �rja: %d\n",ret);

    //�r�s
    ret=write(fd,buf,6); //ret: mennyit �rt ki val�j�ban
    printf("write() �rja: %d\n",ret);

    close(fd);

    return 0;
}
