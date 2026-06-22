
#include <stdio.h>
int main() {

  long long n;// small value int use 

  int count = 0;

  printf("Enter an integer: ");

  scanf("%lld", &n);// ll because we use long not integer 
 
 
  do {

    n /= 10;
    count++;

  } 
  while (n != 0);

  printf("Number of digits: %d", count);

return 0;
}