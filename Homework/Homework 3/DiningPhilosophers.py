import threading
import random
import time
 
class Philosopher(threading.Thread):
 
    program_run = True
 
    def __init__(self, name, leftFork, rightFork):
        threading.Thread.__init__(self)
        self.name = name
        self.leftFork = leftFork
        self.rightFork = rightFork
 
    def run(self):
        while(self.program_run):
            time.sleep(random.uniform(3,13))
            print '%s is hungry.' % self.name
            self.dine()
 
    def dine(self):
        fork1, fork2 = self.leftFork, self.rightFork
 
        while self.program_run:
            fork1.acquire(True)
            locked = fork2.acquire(False)
            if locked: break
            fork1.release()
            print '%s switch forks' % self.name
            fork1, fork2 = fork2, fork1
        else:
            return
 
        self.dining()
        fork2.release()
        fork1.release()
 
    def dining(self):			
        print '%s starts eating '% self.name
        time.sleep(random.uniform(1,10))
        print '%s finishes eating and leaves to think.' % self.name
 
def DiningPhilosophers():
    forks = [threading.Lock() for n in range(5)]
    philosopherNames = ('Nietzsche','Kant','Plato','Socrates', 'Descartes')
 
    philosophers= [Philosopher(philosopherNames[i], forks[i%5], forks[(i+1)%5]) \
            for i in range(5)]
 
    random.seed(507129)
    Philosopher.program_run = True
    for p in philosophers: p.start()
    time.sleep(100)
    Philosopher.program_run = False
    print ("Now we're done.")