/*The doctor advised Chef to drink at least 2000 ml of water each day.
Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x;
        scanf("%d", &x);

        // Your code for each test case goes here
    if (x >= 2000 && 1 <= t <= 2000 && 1 <=x <= 4000) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}