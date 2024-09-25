#include <iostream>

// Arrays are "a collection of a bunch of variables" usually of the same type

class Entity
{
public:
    int example[5];
    // int *example = new int[5]; // If you create it on the heap here however, you will get in memory the pointer to the memory address for the values

    // Constructor initializing the for loop
    Entity()
    {
        for (int i = 0; i < 5; i++)
        {
            example[i] = 2;
        }
    }
};

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

    // int example[5]; // An array is really just a pointer and in this case, an int pointer

    // // Example for loop that will interate through the array assigning the value 2 in memory
    // // Arrays do this in a row, and if you debug can look at the memory.bin you will see this row of 2's
    // for (int i = 0; i < 5; i++)
    // {
    //     example[i] = 2;
    // }

    // int example[5]; // Created on the stack and will be automatically deleted from memory when we exit the scope
    // for (int i = 0; i < 5; i++)
    // {
    //     example[i] = 2;
    // }
    // int *another = new int[5]; // Created on the heap and will need to be manually deleted from memory or when the program ends
    // for (int i = 0; i < 5; i++)
    // {
    //     another[i] = 2;
    // }
    // delete[] another; // Delete is handled here, since 'new' was called with the [], you must delete with them as

    Entity e; // Instantiating 'e' as an Entity

    std::cin.get();
}
