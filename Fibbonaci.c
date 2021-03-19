#include <stdio.h>//Preprocessor to include the standard input and output funtions
int main() {//main function
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");//printing user value
    scanf("%d", &n); // reading 
    printf("Fibonacci Series: ");//printing final phase

    for (i = 1; i <= n; ++i) {     //beginning of for loop
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;//end of code 
}