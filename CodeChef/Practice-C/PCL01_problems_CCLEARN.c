/*Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for 
N languages, what will be the total number of courses in this section? 1≤N≤100*/
#include <stdio.h>

int main(void) {
	// your code goes here
    int N;
    scanf("%d", &N);
    int total_courses = 2 * N;
    scanf("%d", &N);
    // Checking the number is in range or not then print the input number
    if (1 <= N && N <= 100)
    printf("%d\n", total_courses);
    return 0;
}
