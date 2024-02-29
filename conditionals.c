//conditionals in c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x = get_int("what is x ?");
  int y =get_int("what is y");
  if(x<y)
  {
  
    printf("x is less than y\n");
  }

    
 else if (x>y)
 {
  
    printf("x is greater than y \n");
  }
  else
  {

  
    printf("x equal to y \n");
  }


}
  
//cs50.h is file header for get_int

//stdio.h is file header for printf 


