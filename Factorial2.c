#include <stdio.h>  //Preprocessor to include the standard input and output funtions
int main() {        //main function
    int n, i;       //declaration of function
   float fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %f", n, fact);
    }

    return 0;   //return statement :end of code
}