**1.** 
When the order of these two commands is reversed, the problem that arises it that thread that should be removed from the runnable threads can be picked up and run again once the mutex is unlocked. When it runs the way it does in figure 4.10 this is impossible because the current thread will be removed from the runnable threads.

**2.** 
The methods cannot be generalized and need to be called on a specific state and cannot be generalized like it would be if the first three lines are replaced.

**5.** 
In two-phase locking, one transaction runs at a time, so it is not possible for T2 to see the old value of x but the new value of y. With “read committed” isolation level, due to the short read locks, it is possible for T2 to see the old value of x but the new value of y. With snapshot isolation, a transaction can read all entities from the version that was most recently committed when the transaction started. Any writes done since then by other transactions are completely ignored, so it is not possible for T2 to see the old value of x but the new value of y.

**6.** 
The virtual address of the last 4-byte word in page 6 is 28668, which translates to a physical address of 4092. The virtual address of the first 4-byte word in page 6 is 28668, which translates to a physical address of 0.

**7.** 
You can get 1047552 by the following calculation: 1024(32)(32) - 1024. You multiply 32^2 by 1024 since the table is an IA-32 two-level page table has a page directory that can point to 1024 chunks of the page table. What this calculation does is it finds the very last page and then, by subtracting 1024, goes to the beginning of the last chunk. If you add one (i.e. go to the next page in the chunk), you get 1047553.

**8.**
The different numbers of array sizes don't make much of a difference. I am running the program on an Intel Core i7 6700HQ running at 2.6 GHz with around 6 GB of 16 GB of RAM used. No matter how many elements the array has the program took roughly 0.002 seconds to run. With these hardware specs and several Chrome tabs open, someone should be able to replicate the results easily.

**9.**
There are 8 processes. 
