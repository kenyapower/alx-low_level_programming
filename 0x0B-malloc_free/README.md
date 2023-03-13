# 0x0B. C - malloc, free   

***
we shall be looking at:   

### Automatic and dynamic allocation, malloc and free   

***

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.   
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.   

#### Automatic allocation   

When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.   

Arguments and the local variables are stored automatically in memory when the function is called. The program reserves space and uses it without you having to think about it.   

By default, the memory used to store those variables can be read and written. When the program leaves the function, the memory used for all the above variables is released for future use.   

### Dynamic allocation   

#### Malloc    
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.    

#### Valgrind   
When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.   

with the help of tasks, we shall encounter and work with memory at a different level to get a better insight.   
