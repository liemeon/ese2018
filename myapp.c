#include "func1.h"
#include "func2.h"
#include <stdio.h>

void preprocess()
{
  printf("preprocessing!\n");
}

int main()
{
  preprocess();
  func1();
  func2();
  return 0;
}
