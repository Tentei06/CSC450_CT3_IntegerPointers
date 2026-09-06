/*
 * Author: Cody G. Walker
 * Course: CSC450 - Programming III
 * Module 3 Critical Thinking
 * Program: Integer Pointers Program
 *
 * Description:
 * This program asks the user to enter three integer values.
 * Each value is stored in a separate variable and copied into
 * dynamically allocated memory using an integer pointer.
 * The program displays the original variable values, pointer
 * addresses, and values stored at those addresses. Dynamic
 * memory is then released using the delete operator.
 *
 * Pseudocode:
 * START
 *
 * DECLARE firstValue, secondValue, and thirdValue as integers
 * DECLARE firstPointer, secondPointer, and thirdPointer as integer pointers
 *
 * PROMPT user for first integer
 * READ firstValue
 *
 * PROMPT user for second integer
 * READ secondValue
 *
 * PROMPT user for third integer
 * READ thirdValue
 *
 * ALLOCATE dynamic memory for firstPointer
 * ALLOCATE dynamic memory for secondPointer
 * ALLOCATE dynamic memory for thirdPointer
 *
 * STORE firstValue at firstPointer location
 * STORE secondValue at secondPointer location
 * STORE thirdValue at thirdPointer location
 *
 * PRINT original integer values
 * PRINT pointer addresses
 * PRINT values stored at pointer locations
 *
 * DELETE dynamic memory used by firstPointer
 * DELETE dynamic memory used by secondPointer
 * DELETE dynamic memory used by thirdPointer
 *
 * SET firstPointer to nullptr
 * SET secondPointer to nullptr
 * SET thirdPointer to nullptr
 *
 * END
 */

#include <iostream>

using namespace std;

int main()
{
    // Declare three integer variables.
    int firstValue;
    int secondValue;
    int thirdValue;

    // Get three integer values from the user.
    cout << "Enter the first integer: ";
    cin >> firstValue;

    cout << "Enter the second integer: ";
    cin >> secondValue;

    cout << "Enter the third integer: ";
    cin >> thirdValue;

    // Allocate dynamic memory for three integers.
    int *firstPointer = new int;
    int *secondPointer = new int;
    int *thirdPointer = new int;

    // Store the entered values in dynamically allocated memory.
    *firstPointer = firstValue;
    *secondPointer = secondValue;
    *thirdPointer = thirdValue;

    // Display the original integer values.
    cout << "\nInteger Values:" << endl;
    cout << "First value: " << firstValue << endl;
    cout << "Second value: " << secondValue << endl;
    cout << "Third value: " << thirdValue << endl;

    // Display the pointer addresses.
    cout << "\nPointer Addresses:" << endl;
    cout << "First pointer: " << firstPointer << endl;
    cout << "Second pointer: " << secondPointer << endl;
    cout << "Third pointer: " << thirdPointer << endl;

    // Display the values stored at each pointer location.
    cout << "\nValues Stored in Dynamic Memory:" << endl;
    cout << "First pointer value: " << *firstPointer << endl;
    cout << "Second pointer value: " << *secondPointer << endl;
    cout << "Third pointer value: " << *thirdPointer << endl;

    // Release dynamically allocated memory.
    delete firstPointer;
    delete secondPointer;
    delete thirdPointer;

    // Prevent the pointers from becoming dangling pointers.
    firstPointer = nullptr;
    secondPointer = nullptr;
    thirdPointer = nullptr;

    return 0;
}