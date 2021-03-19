#include<stdio.h>     //Preprocessor to include the standard input and output funtions
int main(){           //main function
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;  //Declaration value     
printf("enter the number of row=");    //printing
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
{    
		scanf("%d",&a[i][j]);    
}    
}    
	printf("enter the second matrix element=\n");    
	for(i=0;i<r;i++)    
	{    
			for(j=0;j<c;j++)    //for loop
{    
			scanf("%d",&b[i][j]);    
}    
}    
    printf("multiply of the matrix=\n");   //printing multiplication of matrix 
for(i=0;i<r;i++)    //for loop
{    
for(j=0;j<c;j++)    //for loop
{   
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    // for loop
{    
for(j=0;j<c;j++)    //for loop
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    //printing
}    
return 0;  //end of code
}  