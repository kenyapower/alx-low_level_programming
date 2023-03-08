# 0x08. C - Recursion   

***    

#### IN THIS FOLDER, WE EMBACK ON A JOURNEY THAT COVERS RECURSION IN DIFFERENT WAYS AS WILL BE EVIDENT IN THE TASKS   

***

RECURSION: In C language, recursion refers to the process in which a function repeatedly calls its multiple copies when working on some very small problem.   

#### HOW DOE IT WORK?   

It involves certain tasks and divides them into various subtasks. Some of the subtasks consist of termination conditions/conditions. These subtasks need to satisfy these conditions to terminate the program. Else, as discussed above, a never-ending loop will be created.   

***

TASK 0: Write a function that prints a string, followed by a new line.   
*Prototype: void _puts_recursion(char *s).   

TASK 1: Write a function that prints a string in reverse.   
*Prototype: void _print_rev_recursion(char *s);   

TASK 2: Write a function that returns the length of a string.   
*Prototype: int _strlen_recursion(char *s);   

TASK 3: Write a function that returns the factorial of a given number.   
*Prototype: int factorial(int n);   
*If n is lower than 0, the function should return -1 to indicate an error.   
*Factorial of 0 is 1.   

TASK 4: Write a function that returns the value of x raised to the power of y.   
*Prototype: int _pow_recursion(int x, int y);   
*If y is lower than 0, the function should return -1.   

TASK 5: Write a function that returns the natural square root of a number.   
*Prototype: int _sqrt_recursion(int n);   
*If n does not have a natural square root, the function should return -1.   

TASK 6: Write a function that returns 1 if the input integer is a prime number, otherwise return 0.   
*Prototype: int is_prime_number(int n);   
