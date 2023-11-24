#include <stdio.h>
#include <stdlib.h>

int *factorial(int* n);

int main(){

int n;

do{
printf("Enter a number: ");

scanf("%d" , &n);
} while(n < 0);

int* f = malloc(sizeof(int));

*f = n;

int* result = factorial(&n);

printf("The factorial of %d is %d" , *f , *result);

free(f);

return 0;

}

int *factorial(int* n){

int* solution = malloc(sizeof(int));

    if(*n == 1 || *n == 0){
   
   *solution = 1;
    return solution;

   }

   else{

   int* temp = malloc(sizeof(int));

   *temp = *n - 1;

   factorial(temp);

   *n *= *temp  ;

   free(temp);

   return n;


   }

}

