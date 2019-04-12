/*
 *  test.c
 *
 *  copyright (c) 2019 Xiongfei Shi
 *
 *  author: Xiongfei Shi <jenson.shixf(a)gmail.com>
 *  license: Apache2.0
 *
 *  https://github.com/shixiongfei/adler32
 */

#include <stdio.h>
#include <string.h>

#include "adler32.h"

int main(int argc, char *argv[]) {
  const char text[] = { "Hello World!" };
  unsigned int initcode = adler32(0, NULL, -1);
  unsigned int p1, p2, p3, p4;

  printf("adler32: %u\n", adler32(initcode, text, (int)strlen(text)));

  p1 = adler32(initcode, text, 6);
  p2 = adler32(initcode, text + 6, 6);

  printf("adler32 combine: (%u, %u), %u\n", p1, p2, adler32_combine(p1, p2, 6));

  p3 = adler32(initcode, text, 6);
  p4 = adler32(initcode, text + 1, 6);

  printf("adler32 rolling: %u(%u), %u\n", adler32_rolling(p3, 'W', 'H', 6), p3, p4);

  return 0;
}
