#include <stdio.h>

void main(){
 unsigned long long int factorial = 1;
 int n = 5;
 for(int i = 1; i <= n; i ++){
	factorial *= i;
 }
 printf("%d",factorial);
}