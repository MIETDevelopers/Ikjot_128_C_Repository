#include <stdio.h>	//Preprocessor to include the standard input and output funtions
int main() {		//main function
    int num;		//declaration of function
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;		//end 
}