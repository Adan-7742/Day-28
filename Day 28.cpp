//=======================================================================================================
//                                                                                                      =
//............................C_String Concatination and copying........................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
#include <string>
#include <string.h>
#include <cstring> // Needed for `strlen()`


using namespace std;
//
//In C++, concatenation refers to the process of joining two or more strings together to create a single, longer string.There are several
//ways to achieve concatenation in C++, each with its own advantages and disadvantages.


//=========================================================
//................Using the + operator:
//=========================================================

//The most common and straightforward way to concatenate strings in C++ is by using the plus (+) operator.
// This operator works for both string objects and C-style character arrays.


int con() {

    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string concatenated_string = str1 + " " + str2; // "Hello World"

    char c_str1[] = "Hello";
    char c_str2[] = "World";
    strcat(c_str1, " ");
    strcat(c_str1, c_str2); // "Hello World"

    return 0;


}

//=========================================================
//................Using the append() method:
//=========================================================


//The append() method is another way to concatenate strings in C++.
//It allows you to append one string to another, modifying the original string in place.

int con1() {

    std::string str1 = "Hello";
    std::string str2 = "World";
    str1.append(" ");
    str1.append(str2); // "Hello World"

    return 0;


}

//=========================================================
//................Using the strcat() function:
//=========================================================

//The strcat() function is a C-style function that concatenates two C-style character arrays. 
//It modifies the original string in place, similar to the append() method.


int con2() {
    char c_str1[] = "Hello";
    char c_str2[] = "World";
    strcat(c_str1, " ");
    strcat(c_str1, c_str2); // "Hello World"

    return 0;
}

//=========================================================
//................Using a loop:
//=========================================================

//You can also use a loop to concatenate strings in C++. 
//This approach is less efficient than the methods mentioned above, but it can be useful in some situations.

int con3() {

    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string concatenated_string;

    for (int i = 0; i < str1.length(); ++i) {
        concatenated_string += str1[i];
    }

    concatenated_string += " ";

    for (int i = 0; i < str2.length(); ++i) {
        concatenated_string += str2[i];
    } // "Hello World"

    return 0;
}

/*

The best method for concatenating strings in C++ depends on your specific needs and preferences.
Here are some factors to consider:

Performance: 
Using the + operator or the append() method is generally more efficient than using the strcat() function or a loop.

Memory usage: 
Using the strcat() function or a loop requires allocating additional memory for the resulting string.

Readability: 
Using the + operator or the append() method is generally considered more readable and easier to understand than using the strcat() function or a loop.


*/

/*

Purpose:

Concatenation joins strings, while copying creates new strings.

Output: 

Concatenation creates a single new string, while copying can create one or more new strings.

Original strings:

Concatenation leaves the original strings unchanged, while copying can
modify them depending on the type of copy (shallow or deep).


*/

//=========================================================
//................concatenation using user value
//=========================================================
//

int con4() {


    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::string greeting = "Hello, " + name + "!"; // Greeting becomes personalized with user input

    std::cout << greeting << std::endl;

}
int con5() {

}
int main()
{
    con();
    con1();
    con2();
    con3();
    con4();

}
