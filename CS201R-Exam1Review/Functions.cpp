#include "functions.h"

void example1() {
    cout << "EXAMPLE 1: BOOLEAN EXPRESSIONS, ORDER OF OPERATIONS, RANDOM NUMBERS\n";

    int w = 2, x = 4, y = 6, z = 8;

    //T OR F: boolean expressons and order of operations
    cout << "A: " << (y / x < w && z / y < w / x) << endl;
    cout << "B: " << (y / x < w || z / y < w / x) << endl;

    cout << "C: " << (x < z / w || w > z) << endl;

    //&& is done first, then ||
    cout << "D: " << (x < z || w < y && z < y) << endl;   
    cout << "E: " << (x < z / w || w < z && z < y || w < x) << endl;

    cout << "F: " << (x + y + z / w == 9) << endl;

    cout << y / x << " OR " << y / static_cast<double>(x) << endl;

    // write the code to generate 30 random numbers between 50-80 inclusive:
    srand(time(0));
    cout << "WRITE THIS" << endl;
    for (int i = 0; i < 30; i++)
        cout << " & ";
    cout << endl;
}

int example2(int a, int& b, int& c, int d) {
    cout << "\n\nEXAMPLE 2: PASS BY VALUE VS PASS BY REFERENCE\n";
    int t = 0;
    a = 5;
    b = 10;
    c = 15;
    t = a + b + c + d;
    return t;
}

float example3(int arr[], int size) {
    cout << "\n\nEXAMPLE 3A: ARRAY PROCESSING TO FIND AVG OF ODD VALUES\n";
    // write the pseudocode & code to find the avg of the odd values in array
    //  
    return 0;
}

int example3(vector<int> v1) {
    cout << "\n\nEXAMPLE 3B: VECTOR PROCESSING TO RETURN POSITION OF LARGEST ELEMENT\n";
    // write the pseudocode& code so that example3 returns the position 
    // of the largest element in a vector


    return 0;
}


int  example4(int arr[], int size, int value) {
    cout << "\n\nEXAMPLE 4: ARRAY PROCESSING TO RETURN POSITION OF THE VALUE OR -1 IF NOT FOUND\n";
    // write the pseudocode & code so that example4 returns the position 
    // of the value in the array
    // if the value is not found, 
    // it should throw a logic_error stating this and return -1


    return 0;
}

string example5(string& str) {
    cout << "\n\nEXAMPLE 5: STRING MANIPULATION\n";
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i]))
            str[i] = toupper(str[i + 1]);
        else
            str[i] = toupper(str[i]);
    }
    return str;
}

void example6(string fileName) {
    cout << "EXAMPLE 6: FILE PROCESSING\n";
 
    ifstream inFile;
    inFile.open(fileName);
    if (!inFile.is_open()) {
        cout << "File is not open\n";
        return;
    }

    int intConversion;
    string str;

    //explain the difference between the next 2 'reads' of the file
    inFile >> str;
    cout << "\n" << str << endl;

    getline(inFile, str);
    cout << str << endl;

    cout << "FIX THIS: \n";
    //fix the following to test input before converting values?
    getline(inFile, str);
 
    intConversion = stoi(str);
    cout << intConversion << endl;
    

    inFile.close();
}

void example7() {
    cout << "EXAMPLE 7: POINTERS!\n";
    //write the code:
                           //create two pointers to double values
                           //create the space for the double values & assign these to the pointers with valid values
                           //for each: print the pointer value, the value the pointer points to & the address of the pointer itself
                           //add the values together & print the result

                           //reassign so that first = second
                           //for each: print the pointer value, the value the pointer points to & the address of the pointer itself
}