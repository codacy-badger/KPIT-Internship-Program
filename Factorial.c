#include <stdio.h>

void main(){
 unsigned long long int factorial = 1;
 int n = 5;
 int i;
 for(i = 1; i <= n; i ++){
	factorial *= i;
 }
 printf("%llu",factorial);
}
