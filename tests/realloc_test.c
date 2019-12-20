#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int *ptr =  (int * )malloc(10);
  ptr =realloc (ptr, 2000);
  free (ptr);

  ptr = (int*) calloc(1, 20);
  for(int i =0; i< 20; i++)
  printf("%d\n", *ptr);
  printf("----------------------\n");

  ptr =(int*) realloc (ptr, 30);

   for (int i=0; i< 30; i++)
   printf("%d\n", *ptr);

  for(int i =0; i<2000; i++)
  {
    assert (*ptr == 0);
  }

 return 0;
}
