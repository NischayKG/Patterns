/*
WAP to print pattern:
  11111
  11111
  11011
  11111
  11111
author: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1;
  printf("Number pattern 5\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=(n/2);
  temp1=n*temp1;
  temp1+=(int)(n/2);
  for (int i = 1; i <= n*n; i++) {
    if (i%n!=0){
        if ((temp1+1)==i)
          printf("0");
        else
          printf("1");
      }
    else
      printf("1\n");
  }

  return 0;
}
