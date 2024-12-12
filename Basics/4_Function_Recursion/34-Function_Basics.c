/*
Function works like a blender.
in a blender we give input and blender runs and makes it a paste and gives us the paste as a result

in C program function is made for doing a particuler task

a function takes argument and does work then returns us the result

some function take inputs like integer, float, double, charecter etc.

Function is used in a prgm so that we can edit the code easily, use the code multiple time, increase code reusability.
*/

/*
There are three aspects of a C function
1.Function declaration(Prototype):A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type.

SYNTEX->
return_type function_name(parameter_type1 parameter1, parameter_type2 parameter2, ...);

int printsum(int a, int b)


2. Function Definition: The function definition is where you write the actual code for the task. It includes the function header and body.

SYNTEX->
return_type function_name(parameter_type1 parameter1, parameter_type2 parameter2, ...) {
    // function body
    // code to perform the task
    return value; // if return_type is not void
}

if the function type is void then it will not give us any value in return. It will just perform the task.

int printsum(int a, int b) {
    int sum = a + b;
    return sum;
}

3. Function Call: To use the function, you need to call it from the main function (or any other function). The function call passes the necessary parameters and executes the function code.


SYNTEX->
function_name(argument1, argument2, ...);

int result = printsum(5, 10);


Their are mainly 2 types of functions in C programming

1. Standard Library Functions: Functions that come built into C's libraries, such as printf, scanf, sqrt, and strlen.

These are pre-defined in C standard libraries, and you can use them by including header files like <stdio.h>, <math.h>, or <string.h>.

2. User-Defined Functions:Functions created by the programmer to perform specific tasks.

These are defined by the user in the code and can be customized for various operations, such as mathematical calculations, data processing, or displaying outputs.

 */