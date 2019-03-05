##1.##
When the order of these two commands is reversed, the problem that arises it that thread that should be removed from the runnable threads can be picked up and run again once the mutex is unlocked. When it runs the way it does in figure 4.10 this is impossible because the current thread will be removed from the runnable threads.

##2.##
The methods cannot be generalized and need to be called on a specific state and cannot be generalized like it would be if the first three lines are replaced.

##5.##


##7.##
You can get 1047552 by the following calculation: 1024*32*32 - 1024. You multiply 32^2 by 1024 since the table is an IA-32 two-level page table has a page directory that can point to 1024 chunks of the page table. What this calculation does is it finds the very last page and then, by subtracting 1024, goes to the beginning of the last chunk. If you add one (i.e. go to the next page in the chunk), you get 1047553. 