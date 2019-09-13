# Numerical Analysis Homework 1 Write Up

## Question 3
Question 3 is answered in hw1problem1_cole.c
The output of the program is in Question3_output.txt
It can be compiled with: gcc -o hw1p1_cole hw1problem1_cole.c

The mantissa is calculated by considering how many iterations of summations it takes to get to 1.5 after adding 0.5 to 1.0 and dividing it by 2.0. This is the number of bits of mantissa (including the implicit one for the sign). Then, I used the formulas discussed in class for unit roundoff calculated by the mantissa to reach the unit roundoff numbers, which are different depending on chopping or rounding. 

## Question 4
Question 4 is answered in hw1p2_cole.c
The output of the program is in Question4_output.txt
It can be compiled with: gcc -o hw1p2_cole hw1p2_cole.c 

This program illustrates that the naive algorithm results in a much greater loss of precision than the "good" algorithm that utilizes truncated Taylor series, so much that the naive algorithm fails. 
