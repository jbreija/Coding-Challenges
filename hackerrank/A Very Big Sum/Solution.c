// https://www.hackerrank.com/challenges/a-very-big-sum/problem
// https://github.com/jbreija
// By Jason Breijak

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long int n, k;
  double total = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    total += k;
  }

  printf("%.0f", total);
  printf("\n");
  system("pause");
  return 0;
}