#include <stdio.h>

void main(){
 unsigned long long int factorial = 1;
 int n = 5;
 for(int i = 0; i < n; i ++){
  if(n < 5){
	factorial *= i;
  }
  printf("The factorial of %d is %llu ", n, factorial);
 }
return 0;
}