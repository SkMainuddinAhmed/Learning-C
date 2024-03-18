/*They consider a turn to be good if the sum of the numbers on their dice is greater than 6.
Given that in a particular turn Chef and Chefina got 
X and Y on their respective dice, find whether the turn was good.*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y;

      
        scanf("%d %d", &x, &y);

        // Your code for each test case goes here 
        if (x + y > 6 && 1 <= t <= 100 && 6 >= y && 1<= x) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}