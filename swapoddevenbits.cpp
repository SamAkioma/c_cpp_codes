//Problem link: https://www.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/1

#include<stdio.h>

unsigned int swapBits(unsigned int n) {
    unsigned int oddmask = 0xaaaaaaaa;
    unsigned int evenmask = 0x55555555;
    unsigned int oddbits = (n&oddmask)>>1;
    unsigned int evenbits = (n&evenmask)<<1;
    return (oddbits | evenbits);
}

int main(){
  unsigned int num;
  scanf("%u", &num);4
  unsigned int result = swapbits(num);
  printf("%u", result);
  return 0;
}
