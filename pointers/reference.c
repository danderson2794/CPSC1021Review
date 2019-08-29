#include <stdio.h>

void ref1(int* x);
void ref2(int x);
int main()
{
  int x = 30;
  ref1(&x);
  ref2(x);

  ref1(&x);// what's the output?
  return 0; 
}


void ref1(int* x)
{
    printf("%d\n", *x);
}


void ref2(int x)
{
    x = 359;
    printf("X is %d\n", x);
    ref1(&x);
}
