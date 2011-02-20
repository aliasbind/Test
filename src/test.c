#include <stdio.h>

int fib(int n)
{
  if(n == 0 || n == 1)
    return n;
  return fib(n-1) + fib(n-2);
}

int fact(int n)
{
  if(n == 1)
    return 1;
  return n * fact(n-1);
}

int main(int argc, char *argv[])
{
  printf("Hello, World!\n");
  printf("Goodbye, World!\n");
  return 0;
}
