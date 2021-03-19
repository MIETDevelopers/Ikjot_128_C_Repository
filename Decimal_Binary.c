#include<stdio.h>  //Preprocessor to include the standard input and output funtions  
#include<stdlib.h> //Preprocessor to include the standard input and output funtions
int main(){  
int a[10],n,i;      //declaration
printf("Enter the number to convert: ");//printing    
scanf("%d",&n);    
for(i=0;n>0;i++)    //for loop begin
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    //for loop
{    
printf("%d",a[i]);    
}    
return 0;  //end of code
}  