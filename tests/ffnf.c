#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char * ptr1 = ( char * ) malloc ( 1000 );
  char * ptr2 = ( char * ) malloc ( 6000 );
  char * ptr3 = ( char * ) malloc ( 1000 );
  //char * ptr6 = ( char * ) malloc ( 1000 );

  printf("First fit should pick this one: %p\n", ptr1 );
  printf("Ptr2: %p\n", ptr2 );
  printf("Next fit should pick this one: %p\n", ptr3 );
  //printf("Ptr6: %p\n", ptr6 );

  free( ptr1 );
  free( ptr2 );
  free( ptr3 );
  //free( ptr6 );

  char * ptr5 = ( char * ) malloc ( 6000 );
  printf("ptr5: %p\n", ptr5);

  ptr5 = ptr5;

  char * ptr4 = ( char * ) malloc ( 1000 );
  printf("Chosen address: %p\n", ptr4 );

  return 0;
}
