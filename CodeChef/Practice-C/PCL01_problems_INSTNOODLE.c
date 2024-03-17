/*Chef and Instant Noodles
Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook.

Chef's restaurant has 
X stoves and only 1 packet can be cooked in a single stove at any minute.

How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?

Input Format
The first and only line of input contains two space-separated integers 
X and Y — the number of stoves and the number of minutes, respectively.
Output Format
Print a single integer, the maximum number of customers Chef can serve in Y minutes
Constraints 1≤X,Y≤1000*/
#include <stdio.h>

int main(void) {
	// your code goes here
     int X, Y;
    scanf("%d %d", &X, &Y);
    //number of stoves and minutes
    if (X >= 1 && X <= 1000 && Y >= 1 && Y <= 1000)     
    //verify input in range or not
    {
        printf("%d", X * Y); 
        //print maximum number of customers.
    }
    return 0;
}
