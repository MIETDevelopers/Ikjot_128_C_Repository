#include <stdio.h> //Pre-Process directive to include standard input output header file
int main() // main function body starting
{
  int array[100], search, c, n; //Array and Variable declaration of integer data type

  printf("Enter number of elements in array\n");
  scanf("%d", &n); 

  printf("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //taking Number of element input from the user

  printf("Enter a number to search\n");
  scanf("%d", &search); // taaking the required number from the user

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)  // If required element is found it will print it's location
    {
      printf("%d is present at location %d.\n", search, c+1); // Printing the location of the required element
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}