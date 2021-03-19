#include<stdio.h>//Preprocessor to include the standard input and output funtions
  
int main()//main function
{
    int a[20],i,x,n;
    printf("How many elements?");//printing elements
    scanf("%d",&n);
     
    printf("Enter array elements:n");//printing array elements
    for(i=0;i<n;++i)                 //for loop begining
        scanf("%d",&a[i]);
     
    printf("nEnter element to search:");//again printing
    scanf("%d",&x);
     
    for(i=0;i<n;++i)  //for loop
        if(a[i]==x)    //if statement generated
            break;     // code gets shifted due to break statement
     
    if(i<n)    //if statement
        printf("Element found at index %d",i);
    else   //else statement
        printf("Element not found");
  
    return 0;  //end of code
}