#include <stdio.h>
#include <stdlib.h>
//#include <fstream>

int main()
{
    FILE * fptr;
    fptr = fopen("veres.txt","w");
    fprintf(fptr, "Veres Bal�zs L�szl� G�IK ZKY1YM");
    fclose(fptr);
    system("pause");
    return 0;
}
