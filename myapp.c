#include "func1.h"
#include "func2.h"
#include <stdio.h>

void preprocess()
{
  printf("preprocessing!\n");
}

void postprocess()
{
  printf("postprocessing!\n");
}

void turbo_on()
{
  printf("turbo_on\n");
}

void turbo_off()
{
  printf("turbo_off\n");
}

void hello()
{
  printf("hello brother!!");
}

int main()
{
  preprocess();
  turbo_on();

  func1();
  func2();

  turbo_off();
  postprocess();

  hello();

  return 0;
}
