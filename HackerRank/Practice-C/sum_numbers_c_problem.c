/*write a program in c for 
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare 4 variables: two of type int and two of type float.
Read 2 ines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
Use the +  and - operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
Input Format
The first line contains two integers
The second line contains two floating point numbers.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int a,b;
    float c,d;
    scanf("%d %d %f %f",&a,&b,&c,&d);
    int sum = a+b;
    int diff = a-b;
    float fsum = c+d;
    float fdiff = c-d;
    printf("%d %d\n%.1f %.1f",sum,diff,fsum,fdiff);
    return 0;
}
