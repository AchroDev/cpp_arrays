#include <iostream>
#include <array>

// Arrays are "a collection of a bunch of variables" usually of the same type

class Entity
{
public:
    // You can however set a constant to be able to track the size
    static const int exampleSize = 5; // This const int makes the size of the array known at compile time and can be tracked
    int example[exampleSize];         // Currently this is an error as the int 'size' needs to be static.

    // C++ 11 std array tracks the size and type as it is a requirement to be defined
    std::array<int, 5> another;

    // int *example = new int[5]; // If you create it on the heap here however, you will get in memory the pointer to the memory address for the values

    // Constructor initializing the for loop
    Entity()
    {
        // There isn't a surefire way to track the size of an array like we've written so far
        // int a[5];                            // Creating an array on the stack
        // sizeof(a);                           // Getting the size of the array in bytes, NOT the actual size
        // int count = sizeof(a) / sizeof(int); // You can divide by the size of the data type, in this case 'int', this will give you the size of the array
        //                                      // this only works on the stack, if you try to do it with data on the heap, you will get the size of an int* which is 4 bytes
        //                                      // meaning your calculation would be wrong.

        // Now using the C++ 11 std array instead of the other
        for (int i = 0; i < another.size(); i++)
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
