#include <iostream>

// Arrays are "a collection of a bunch of variables" usually of the same type

int main()
{
    int example[5]; // Example array of 5 integers
    example[0] = 2; // Accessing and setting the first element of the array
    example[4] = 4; // Accessing and setting the last element of the array

    int a = example[0]; // You can set other variables to hold the value of any element in an array
    // example[-1] = 5;    // Memory access violation, value cannot be less than the arrays first element
    // example[5] = 2;     // Memory access violation, value cannot be more than the arrays last element

    std::cout << example[0] << std::endl; // Prints the first index/element of the array
    std::cout << example[4] << std::endl; // Prints the last index/element of the array
    std::cout << example << std::endl;    // Prints the memory address of the array, 'example' here is actually just a pointer type

    std::cin.get();
}
