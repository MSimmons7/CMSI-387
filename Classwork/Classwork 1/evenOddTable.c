#include <stdio.h>

   int main( int argc, char * argv[] ) {

      int i;
      char* eOrO;

      for( i = -10; i < 11; i++ ) {
         printf( "%d %d %d\n", i, power( 2, i ), power( -3, i ) );
      }
      return 0;

   }
