In this scenario, the philosophers do not wait for a fork while currently holding a fork, thus avoiding deadlock. 
The procedure is to do block while waiting to get first fork, and a nonblocking acquire of second fork. 
If failed to get second fork, release first fork, swap which fork is first and which is second and retry until getting both.