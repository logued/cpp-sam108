// sam108
// C-style strings - arrays of type char - and "pointers to char"

/**
 * Demonstrates a C-style string, which is an array of char.
 * Using Pointers to access an array of 'char'
 *
 * NB: C-style strings in C/C++ are stored in an array of char, terminated with a null value i.e '\0'
 * Note that there is a string class in C++ that makes dealing with strings much easier,
 * but many systems still use the older C-style array of chars, so it is worth looking at.
 *
 * */

#include <iostream>
using namespace std;

const int SIZE = 10;    // space for 9 characters and one '\0' character

int main()
{
    char name[SIZE] = "James";
    // The char array name[] is filled with the characters 'J', 'a', ....
    // and terminated by a null character '\0'
    // The null escape character '\0' is added one beyond the last character in the string
    // (i.e, as the sixth character, just beyond character 's')
    // It is put there to indicate that the string ends at that point in the array,
    // and anything beyond it is not part of the string.
    // The last four characters in the array have not been initialized
    // with any particular values. There are values in the array elements
    // (whatever values happened to be in there) and these are called 'garbage' values.
    //
    char town[] = { 'A', 'r', 'd', 'e', 'e', '\0' };
    // In this case we explicitly initialized each character, so we must put in the '\0'
    // The size of the array will be 6 in this case.

    cout << name << endl;
    cout << town << endl;

    // Print out the characters one-by-one
    int i = 0;
    while (name[i] != '\0')		// while we have not reached the '\0'
    {
        cout << name[i] << " ";  // output the character
        i++;
    }
    cout << endl;

    // Print out the characters using a pointer
    char* p;	// p is a pointer to a char
    p = name;	// name of an array is the address of first array element
    // so, p now points at the first character ( i.e. 'J' )

    // Iterate over the characters using a pointer and output each one
    while (*p != '\0')	 // while the character that p points to is not the '\0' character
    {
        cout << *p << " ";
        p++;			// increment pointer by one element (one char length)
    }
    cout << endl << endl;

    // We can write 'difficult to read' code in C/C++, which is a novelty, but
    // doesn't do much for program clarity.
    // What do you think the while() loop below does?

    char buffer[40];			// temporary storage array
    char* pBuffer = buffer;		// pointer to buffer
    p = name;
    while (*pBuffer++ = *p++);  // yes, it's all in one line !
    cout << "Buffer contains: " << buffer << endl;

    // The above coding is BAD practice because it is difficult to understand.

    //*** Exercise - *************************************************************
    //    Compile run and test as you go. Study the output carefully.

    //TODO  Q.1.
    // Declare an array called nameAndTown, i.e. char nameAndTown[50];
    // Now fill the nameAndTown array with the name from name[],
    // followed by a comma, and then by a space, and then by the
    // town name from the town[] array.
    // Remember to terminate the string with a '\0'.
    // Print out your result.
    // (Hint: Work it out on paper first.)

    // a. Use array notation.
    // b. Use pointer notation.

    return 0;
}
