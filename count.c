#include <stdio.h>
int main() {
  
  int n;
  
  int count = 0;

  printf("Enter integer: ");

  scanf("%d", &n);
 
  do {

    n /= 10;
    
    ++count;
    
  }
  while (n != 0);

  printf("total numbers of  digits: %d", count);
}
