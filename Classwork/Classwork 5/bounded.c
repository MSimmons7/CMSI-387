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





  /* public class Simple2Threads {
public static void main(String args[]){
Thread childThread = new Thread(new Runnable(){
public void run(){
sleep(3000);
System.out.println("Child is done sleeping 3 seconds.");
}
});
childThread.start();
sleep(5000);
System.out.println("Parent is done sleeping 5 seconds.");
}
private static void sleep(int milliseconds){
try{
Thread.sleep(milliseconds);
} catch(InterruptedException e){
// ignore this exception; it won’t happen anyhow
}
}
}

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
static void *child(void *ignored){
sleep(3);
printf("Child is done sleeping 3 seconds.\n");
return NULL;
}
int main(int argc, char *argv[]){
pthread_t child_thread;
int code;
code = pthread_create(&child_thread, NULL, child, NULL);
if(code){
fprintf(stderr, "pthread_create failed with code %d\n", code);
}
sleep(5);
printf("Parent is done sleeping 5 seconds.\n");
return 0;
} */