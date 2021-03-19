#include<stdio.h> //Preprocessor to include the standard input and output funtions
long int multiplyNumbers(int n); 
int main() { //main function
    int n;  
    printf("Enter a positive integer: "); //printing user value
    scanf("%d",&n); //reading user value
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));//value gets printed
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)// introduction to if statement
        return n*multiplyNumbers(n-1);
    else //introductyion to else statement
        return 1;//end 
}