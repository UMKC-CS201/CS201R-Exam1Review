// CS201R-Exam1Review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functions.h"

int main() {
    //EXAMPLE1: boolean expressions, order of operations, random numbers
    example1();   

    //EXAMPLE2: pass by value pass by reference
    int w = 0, x = 0, y = 0, z = 0;
    int t = example2(w, x, y);          
    cout << "After call: " << w << " " << x << " " << y << " " << z << " " << t << endl;

    
    //EXAMPLE3: passing arrays & vectors, pseudocode
    //          also an example of overloaded function
    // write the pseudocode so the functions example3 returns the average 
    // of the odd values in the array
    int size = 10;
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
    vector<int> v1 = { 10,11,12,13,14,15,16,17,18,19 };
    cout << example3(arr, size) << endl;

    // write the pseudocode so that fun1 returns the position 
    // of the largest element in a vector
    cout << example3(v1) << endl;


    //EXAMPLE4: 
    // write the pseudocode so that fun1 returns the position of the value in the array
    // if the value is not found, it should throw a logic_error stating this and return -1
    cout << example4(arr, size, 11) << endl;


    //EXAMPLE5:
    // alter a string using string functions
    
    string str1 = "This is the GREATEST ever!!!";
    cout << example5(str1) << endl;


    //EXAMPLE6
    // file input 

    string str2;
    cout << "Please enter the name of the file to open: ";
    getline(cin, str2);
    example6(str2);


}


 
