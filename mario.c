#include <cs50.h>
#include <stdio.h>

int n;

int main (void)
{
   do
   {
       n = get_int("Enter the Height of the Pyramid ");
   }
   while (n < 0 || n > 23);


  // Loop for printing the entire pyramid
   for (int i = 0; i < n; i++ )
   {
     // Loop for printing spaces - LEFT side
      for (int j = 0; j < (n-(i+1)); j++)
      {
         printf(" ");
      }
      //Loop for printing hash-tag - LEFT side
      for (int k = 0; k <= i; k++)
      {
         printf("#");
      }
      //Print middle space - fixed
      printf(" ");
      //Loop for printing hash-tag - RIGHT side
      for (int l = 0; l <= i; l++)
      {
         printf("#");
      }
      //Loop for printing spaces - RIGHT side
      for (int m = 0; m < (n-(i+1)); m++)
      {
         printf(" ");
      }
     printf("\n");
   }
}
