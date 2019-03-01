#include <stdio.h>
   #include <stdlib.h>
    
   int mutex = 1;
   int full  = 0;
   int empty = 7;          // maximum of seven messages in buffer
   int x     = 0;
    
   int main()
   {
      int n;
      void producer();
      void consumer();
      int wait_( int );
      int signal_( int );
      while( 1 ) {
         printf( "\n\n   1.Producer\n   2.Consumer\n   3.Exit" );
         printf("\n      Enter your choice: ");
         scanf("%d",&n);
         switch( n ) {
            case 1:  if( (mutex == 1) && (empty != 0) ) {
                        producer();
                     } else {
                        printf( "\nBuffer is full!!" );
                     }
                     break;
            case 2:  if( (mutex == 1) && (full != 0) ) {
                        consumer();
                     } else {
                        printf("\nBuffer is empty!!");
                     }
                     break;
            case 3:
            default: exit( 0 );
                     break;
         }
      }
      return 0;
   }
    
   int wait_( int s ) {
      return( --s );
   }
    
   int signal_( int s ) {
      return( ++s );
   }
    
   void producer() {
      mutex = wait_(mutex);
      full  = signal_( full);
      empty = wait_(empty);
      x++;
      printf( "\n  Producer produces the item %d", x );
      mutex = signal_(mutex);
   }
    
   void consumer()
   {
      mutex = wait_(mutex);
      full  = wait_(full);
      empty = signal_(empty);
      printf( "\n  Consumer consumes item %d", x );
      x--;
      mutex = signal_(mutex);
   }


void sellTicket(){
  pthread_mutex_lock(&my_mutex);
  if(seatsRemaining > 0){
    dispenseTicket();
    seatsRemaining = seatsRemaining - 1;
    cashOnHand = cashOnHand + PRICE;
  } else
    displaySorrySoldOut();
  pthread_mutex_unlock(&my_mutex);
}
void audit(){
  pthread_mutex_lock(&my_mutex);
  int revenue = (TOTAL_SEATS - seatsRemaining) * PRICE;
  if(cashOnHand != revenue + STARTING_CASH){
    printf("Cash fails to match.\n");
exit(1); }
  pthread_mutex_unlock(&my_mutex);
}
