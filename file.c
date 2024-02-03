| lanuage c  | agreement in c and how we do the code  |

### this code how to make agree in c by using if and else if and assign = 

  ~~file.c code down .~~
-------------------------------------------------------------------------------------------------------------------
#include "cs50.h"

#include <stdio.h>

  

int main(void)

{

char c= get_char("do u agree");
 if(c=='y')

 {
printf("Agreed.\n");

 }

else if (c=='Y')

{

printf("Agreed.\n");

}

else if (c=='n')

 {

printf("Not Agreed.\n");

 }

else if (c=='N')
 {

 printf("Not Agreed.\n");

}

}

