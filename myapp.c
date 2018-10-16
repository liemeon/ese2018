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

int main()
{
  preprocess();
  func1();
  func2();
  postprocess();
  return 0;
}
