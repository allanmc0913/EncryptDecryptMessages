/**
 * helpers.cpp
 *
 * Allan Chen, Peterson Ianakiev
 * allanmc, ianakiev
 *
 * EECS 183: Project 3
 *
 * Helpers.cpp contains all the function definitions that are declared in 
 * "helpers.h".  Helpers.cpp also contains all the functions that are called and
 * used inciphers.cpp.
 */

#include "helpers.h"
#include <iostream>

// ASCII Art

void printLeftAlignedTriangle(int height) {
    
    //nested for loop
    for (int i = 1; i <= height; i++) {
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
    



void printRightAlignedTriangle(int height) {
    
    for (int i = height - 1; i >= 0; i--) {
        
        //j loop outputs spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        //k loop outputs asterisk
        for (int k = 0; k < height - i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}



void printIsosceles(int height) {
    
    for (int i = height - 1; i >= 0; i--) {
        
        //j loop outputs spaces
        for (int j = 0; j <= i - 1; j++) {
            cout << " ";
        }
        
        //k loop outputs asterisks
        for (int k = 1; k < (2 * height) - (2 * i); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Ciphers

char shiftAlphaCharacter(char c, int n) {
    
    //number of alphabet characters
    const int NUM_OF_ALPHA = 26;
    
    //took n and divided by 26 to find how many full cycles of the alphabet it
    //needs to shift.
    int numAlphaCycles = n / NUM_OF_ALPHA;
    
    //turned shiftedChar to an integer type, so all operations are performed in
    //integer type.  Avoids ASCII 0-127 confusion.  Returns shiftedChar as
    //char in the end.
    int shiftedChar = c + n;
    
    //if c is UPPERCASE
    if (c >= 'A' && c <= 'Z') {
        
        //if user enters a positive key, numAlphaCycles will be positive.
        //Enter loop and subtract.  Iterations based on numAlphaCycles.
        //If numAlphaCycles = 0, shiftedChar = c + n suffices.
        if (numAlphaCycles > 0) {
            
            for (int i = 0; i < numAlphaCycles; i++) {
                shiftedChar = shiftedChar - NUM_OF_ALPHA;
            }
        }
        
        //if user enters a negative shift key, numAlphaCycles will be negative
        //Enter loop and add 26 characters
        if (numAlphaCycles < 0) {
            
            for (int i = 0; i > numAlphaCycles; i--) {
                shiftedChar = shiftedChar + NUM_OF_ALPHA;
            }
        }
        
        //if the character is still great than 90 after shiftedChar operations,
        //subtract 26 again.  For big positive shifts
        if (shiftedChar > 'Z') {
            shiftedChar = shiftedChar - NUM_OF_ALPHA;
        }
        
        //if character is still less than 65, add 26 again. Also for big
        //negative shifts
        if (shiftedChar < 'A') {
            shiftedChar = shiftedChar + NUM_OF_ALPHA;
        }
    }
    
    //if c is lowercase
    //code is similar to UPPERCASE
    if (c >= 'a' && c <= 'z') {
        
        if (numAlphaCycles > 0) {
            
            for (int i = 0; i < numAlphaCycles; i++) {
                shiftedChar = shiftedChar - NUM_OF_ALPHA;
            }
        }
        
        if (numAlphaCycles < 0) {
            
            for (int i = 0; i > numAlphaCycles; i--) {
                shiftedChar = shiftedChar + NUM_OF_ALPHA;
            }
        }
        
        if (shiftedChar > 'z') {
            shiftedChar = shiftedChar - NUM_OF_ALPHA;
        }
        
        if (shiftedChar < 'a') {
            shiftedChar = shiftedChar + NUM_OF_ALPHA;
        }
    }
    
    //turn integer shiftedChar back into a char
    //returning a char to avoid compile error
    return static_cast<char>(shiftedChar);
}




string caesarCipher(string original, int key, bool encrypt) {
    
    //if encrypt is true
    if (encrypt) {
        
        //loop based on length of string
        for (int i = 0; i < original.length(); i++) {
            
            //has to be an alphabet character
            if ((original[i] >= 65 && original[i] <= 90) ||
                (original[i] >= 97 && original[i] <= 122)) {
                
                //calls shiftAlphaCharacter function and modifies that character
                original[i] = shiftAlphaCharacter(original[i], key);
            }
        }
    }
    
    //if encrypt is false
    if (!encrypt) {
        
        for (int i = 0; i < original.length(); i++) {
           
            //has to be alphabet character
            if ((original[i] >= 'A' && original[i] <= 'Z') ||
                (original[i] >= 'a' && original[i] <= 'z')) {
                
                //for decrypt, you shift back negative key.  
                original[i] = shiftAlphaCharacter(original[i], -1 * key);
            }
        }
    }
    
    // returning a string to avoid compile error
    return original;
}


string removeNonAlphas(string original) {
    
    //NEED a new string to store only alphabet characters
    string newLine;
    
    //loop that runs based on length of string
    for (int i = 0; i < original.length(); i++) {
        
        //if character is alphabet character
        if ((original[i] >= 'A' && original[i] <= 'Z') ||
            (original[i] >= 'a' && original[i] <= 'z')) {
            
            //concatenate only alphabet characters and store in new string
            newLine += original[i];
        }
    }

    // returning a string of only alphabet characters to avoid compile error
    return newLine;
}


string toUpperCase(string original) {
    
    //the lowercase and uppercase letters on the ASCII table are 32 spaces apart
    const int DECRYPT_SHIFT = 32;
    
    //loop that runs based on length of characters of string
    for (int i = 0; i < original.length(); i++) {
        
        //if character is lowercase
        if (original[i] >= 'a' && original[i] <= 'z') {
            
            //replace original char with UPPERCASE char using the shift value
            original[i] -= DECRYPT_SHIFT;
        }
    }

    //returned string to avoid compile error
    return original;
}


string vigenereCipher(string original, string keyword, bool encrypt) {
    
    
    
    // returning a string to avoid compile error
    return original;
}

