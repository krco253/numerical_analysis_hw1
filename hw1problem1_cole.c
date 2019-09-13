/*
Author: Kelsey Cole
Homework 1, Question 3
Class: CS 537 - Numerical Analysis
Purpose: compute number of mantissa digits on machine 
as well as the unit roundoff
*/

#include <stdio.h>
#include <math.h> //for the "to the power of" function
int main(){

float old = 1.0; //initialize old solution 
float x = 0.5;
int k = 1; //k = number of mantissa digits
float new = 1.0 + x; //initialize new solution
while (!((new == old) || (new == 1.0))){
old = new;
k = k +1;
x = x/2.0;
new = 1.0 + x;
}

printf("Number of mantissa digits is: %d \n", k); //print mantissa digits
int chopping_roundoff = -k + 1; //calculate chopping unit roundoff exponent
//unit roundoff exponent for rounding is -k
printf("Unit roundoff if chopping: 2^(%d) \n", chopping_roundoff);
printf("Unit roundoff if rounding: 2^(-%d) \n", k);

return 0;
}
