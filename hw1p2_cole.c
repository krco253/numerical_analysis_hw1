/*
Author: Kelsey Cole
Homework 1, Question 4
Class: CS 537 - Numerical Analysis
Purpose: Compare "good" algorithm and "straightforward" algorithm for computing problem 2 on homework
*/

#include <stdio.h>
#include <math.h> //for the power to function

//function to calculate the factorial of a number n
float factorial(float n){
if(n==1){
	return 1;
}else{
	return n * factorial(n-1);
}
}

//main function
int main(){
float computed_value = 0; //initialize computed value
float bad_algorithm = 0;
printf("My algorithm results: \n"); //"Good" algorithm results
for(int k = 2; k < 7; k++){ //for k = 2...6
printf("k = %d", k); //print k value
//calculate using "good" algorithm
computed_value = pow(10,-2*k) * ((1/k) + (1/(factorial(k+2))));
printf(", computed value = %.15lf", computed_value); //print computed value
//"bad" algorithm
bad_algorithm = (pow(10,-2*k)/k) + (pow(10,-2*k)/factorial(k+2));
printf(", bad algorithm = %.15lf \n", bad_algorithm);
}

return 0;
}
