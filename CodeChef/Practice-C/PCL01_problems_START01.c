/* Number Mirror
Write a program that takes a number 

N as the input, and prints it to the output.

Input Format
The only line of input contains a single integer.

Output Format
Output the answer in a single line.

Constraints
0≤N≤10^5*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int N;
    // Taking input
    scanf("%d", &N);
    // Checking the number is in range or not then print the input number
    if (0 <= N && N <= 100000)
    printf(" %d\n", N);
    return 0;
}