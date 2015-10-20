#include <stdio.h>
#include "ispunc.h"

int main(int argc, char* argv[]) {

  char c;
/* Either way below is equivalent. They both do the same thing...
/* These 2 different while loops do the same thing
  c = getchar();
  while (c != EOF) {
    if (!ispunc(c))
      printf("%c",c);
    c = getchar();   
  }
*/

  while ((c=getchar()) != EOF) {
     if (!ispunc(c))
       printf("%c",c);
  }

  return 0;

}
