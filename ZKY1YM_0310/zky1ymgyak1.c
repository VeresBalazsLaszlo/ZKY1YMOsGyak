#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[50];

   strcpy( command, "cd" );
   system(command);
   strcpy( command, "ls -l" );
   system(command);
   return(0);
}
