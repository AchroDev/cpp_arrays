#include <iostream>

// Arrays are "a collection of a bunch of variables" usually of the same type

int main()
{
    // int example[5]; // Example array of 5 integers
    // example[0] = 2; // Accessing and setting the first element of the array
    // example[4] = 4; // Accessing and setting the last element of the array

    // int a = example[0]; // You can set other variables to hold the value of any element in an array
    // // example[-1] = 5;    // Memory access violation, value cannot be less than the arrays first element
    // // example[5] = 2;     // Memory access violation, value cannot be more than the arrays last element

    // std::cout << example[0] << std::endl; // Prints the first index/element of the array
    // std::cout << example[4] << std::endl; // Prints the last index/element of the array
    // std::cout << example << std::endl;    // Prints the memory address of the array, 'example' here is actually just a pointer type

    int example[5]; // An array is really just a pointer and in this case, an int pointer

    // Example for loop that will interate through the array assigning the value 2 in memory
    // Arrays do this in a row, and if you debug can look at the memory.bin you will see this row of 2's
    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }

    std::cin.get();
}
