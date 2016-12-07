#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=0, b=0, c=0, d=0;
  
  a++;
  
  b--;
  
  c = 1;
  
  c += a;
  
  d -= c;

  printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
    
  return 0;
}
