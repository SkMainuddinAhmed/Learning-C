/*Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.

Input Format-The first and only line of input contains two space-separated integers X,Y — the marks of Alice and Bob respectively.
Condition 1≤X,Y≤100
Output Format-For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.*/
#include <stdio.h>

int main() {
    int X, Y;

    scanf("%d %d", &X, &Y);
    if (X >= 2 * Y && 1 <= X && 100 >= Y) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
