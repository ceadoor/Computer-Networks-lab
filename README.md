# Contents info

<hr>


## <img src="https://img.shields.io/badge/Experiment%20no-1-blue">[→ fork.c](https://github.com/najafmohammed/c-programs/blob/master/First_readers_writers.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that can create a new process by using fork
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>
  
   - needs <unistd.h> for using fork
   - tree visualisation
    
      <pre>
                                      parent
                                        || (fork)
                                        /\
                                       /  \ 
                                      /    \
          (remaining parent code)<-parent   \
                                             \
                                              child->(copy of parent code)
        </pre>
 
 <hr>
 
## <img src="https://img.shields.io/badge/Experiment%20no-2-blue">[→ fork tree.c](https://github.com/najafmohammed/c-programs/blob/master/forktree.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that can create a new process in a child produced by a parent
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>
  
   - tree visualisation
    
      <pre>
           parent
             || (fork)
             /\
            /  \ 
           /    \
        parent child
                  ||(fork)
                  /\
                 /  \
            parent child
        </pre>
        <hr>
        
## <img src="https://img.shields.io/badge/Experiment%20no-3-blue">[→ odd or even.c](https://github.com/najafmohammed/c-programs/blob/master/fork_pass.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that takes takes an array of numbers and outputs only the even numbers
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>  
  
    - visualization 
    
      <pre>
      
        parent -----(fork)-----> child
          ↑                        ↓
       arary[1,2,4]               [2,4]
       
       </pre>
       
   <hr>
       
## <img src="https://img.shields.io/badge/Experiment%20no-4-blue">[→ message using thread.c](https://github.com/najafmohammed/c-programs/blob/master/threadmsg.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that takes makes a threads to display a message
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>  
    
   - need to use -lpthread after cc <program name>
   
   > cc threadmsg.c -lpthread 
   
   <hr>
   
   ## <img src="https://img.shields.io/badge/Experiment%20no-5-blue">[→ fibonacci and prime using thread.c](https://github.com/najafmohammed/c-programs/blob/master/fib_prime.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that takes makes uses threads to print fibonacii series and primes numbers for numbers 0 to n
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>  
    
   - need to use -lpthread after cc <program name>
   
   > cc threadmsg.c -lpthread 
   
   <hr>
   
## <img src="https://img.shields.io/badge/Experiment%20no-6-blue">[→ First Reader's Writer's Problem.c](https://github.com/najafmohammed/c-programs/blob/master/First_readers_writers.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that takes makes uses threads to solve the First Reader's Writer's Problem
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>  
    
   - need to use -lpthread after cc <program name>
   
   > cc threadmsg.c -lpthread 
   
   <hr>
   
## <img src="https://img.shields.io/badge/Experiment%20no-7-blue">[→ Second Reader's Writer's Problem.c](https://github.com/najafmohammed/c-programs/blob/master/second_readers_writers.c)

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program that takes makes uses threads to solve the First Reader's Writer's Problem
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>  
    
   - need to use -lpthread after cc <program name>
   
   > cc threadmsg.c -lpthread 
   
## <img src="https://img.shields.io/badge/Experiment%20no-8-blue"><img src="https://img.shields.io/badge/pending-%20-red">

  <img src="https://img.shields.io/badge/aim-%3A-green"/>
  
   - create a c program 
   
  <img src="https://img.shields.io/badge/note-%3A-green"/>  
    
   
<hr>
 <footer>
   Codes are still incomplete. Contributions are welcome for adding more information to each program
 </footer>
