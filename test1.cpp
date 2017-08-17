/**
 * test.cpp
 *
 * Allan Chen, Peterson Ianakiev
 * allanmc, ianakiev
 *
 * EECS 183: Project 3
 *
 * A program that tests the functions in helpers.cpp and their results
 * using test cases.
 */

#include <iostream>
#include "helpers.h"

int main() {
    
    
    // test printRightAlignedTriangle
    printRightAlignedTriangle(1);
    printRightAlignedTriangle(3);
    printRightAlignedTriangle(4);
    printRightAlignedTriangle(15);
    printRightAlignedTriangle(24);
    
    
    
    // test printLeftAlignedTriangle
    printLeftAlignedTriangle(1);
    printLeftAlignedTriangle(3);
    printLeftAlignedTriangle(4);
    printLeftAlignedTriangle(20);
    printLeftAlignedTriangle(26);
    
    
    
    //test printIsosceles
    printIsosceles(1);
    printIsosceles(3);
    printIsosceles(5);
    printIsosceles(15);
    printIsosceles(30);
    
    
    // test shiftAlphaCharacter
    cout << shiftAlphaCharacter('a', 0) << endl;
    cout << shiftAlphaCharacter('a', 1) << endl;
    cout << shiftAlphaCharacter('b', 2) << endl;
    cout << shiftAlphaCharacter('x', 25) << endl;
    cout << shiftAlphaCharacter('x', 50) << endl;
    cout << shiftAlphaCharacter('x', 670) << endl;
    cout << shiftAlphaCharacter('X', 500) << endl;
    cout << shiftAlphaCharacter('X', 50) << endl;
    cout << shiftAlphaCharacter('W', 36) << endl;
    cout << shiftAlphaCharacter('A', 10) << endl;
    cout << shiftAlphaCharacter('A', 0) << endl;
    cout << shiftAlphaCharacter('a', -50) << endl;
    cout << shiftAlphaCharacter('a', -3) << endl;
    cout << shiftAlphaCharacter('x', -461) << endl;
    cout << shiftAlphaCharacter('A', -51) << endl;
    cout << shiftAlphaCharacter('A', -5) << endl;
    cout << shiftAlphaCharacter('X', -36) << endl;
    
    
    //test caesarCipher
    cout << caesarCipher("Hello world!", 7, false) << endl;
    cout << caesarCipher("Hi EECS 183", 40, true) << endl;
    cout << caesarCipher("I like pizza!", 55, false) << endl;
    cout << caesarCipher("Computers are cool.", 9, true) << endl;
    cout << caesarCipher("Caesar is smart.", -12, false) << endl;
    cout << caesarCipher("People are slow", -18, true) << endl;
    cout << caesarCipher("Monkeys are goofy!", -200, false) << endl;
    cout << caesarCipher("GO BLUE!!", 500, true) << endl;
    cout << caesarCipher("Boo MSU", -528, true) << endl;
    cout << caesarCipher("Maize and Blue", -228, true) << endl;
    cout << caesarCipher("Dennison is confusing.", 1000, false) << endl;
    cout << caesarCipher("Coding is awesome!!!", -867, true) << endl;
    cout << caesarCipher("Tigers are strong", -900, false) << endl;
    cout << caesarCipher("snow is cold...", -1, true) << endl;
    cout << caesarCipher("Snakes are SCARY!", 77, true) << endl;
    cout << caesarCipher("Tables are shiny", -82, false) << endl;
    cout << caesarCipher("Water is refreshing", 84, false) << endl;
    cout << caesarCipher("Basketball is hard.", -92, true) << endl;
    
    
    //test removeNonAlphas
    cout << removeNonAlphas("I love rockets!!!") << endl;
    cout << removeNonAlphas("Phones are wonderful ***") << endl;
    cout << removeNonAlphas("Sofas are comfy......") << endl;
    cout << removeNonAlphas("I like the number: 55") << endl;
    cout << removeNonAlphas("<Bottles are blue>") << endl;
    cout << removeNonAlphas("Cards are p.l.a.s.t.i.c.") << endl;
    cout << removeNonAlphas("paper is wasteful") << endl;
    cout << removeNonAlphas("Cars are fast") << endl;
    cout << removeNonAlphas("Apples are Sweet!!!") << endl;
    cout << removeNonAlphas("Apples pie are cool +++") << endl;
    cout << removeNonAlphas("Walls are not usually blue 4") << endl;
    cout << removeNonAlphas("44444444444444 Hello!") << endl;
    cout << removeNonAlphas("Science is 8675 hard") << endl;
    cout << removeNonAlphas("My !!!!!! is blue 321.") << endl;
    
    
    //test toUpperCase
    cout << toUpperCase("I lIkE BoOks") << endl;
    cout << toUpperCase("i aM tIreD") << endl;
    cout << toUpperCase("WhY siT when You caN RuN") << endl;
    cout << toUpperCase("michigan rocks!") << endl;
    cout << toUpperCase("gO BlUe") << endl;
    cout << toUpperCase("HammErS arE StRoNG") << endl;
    cout << toUpperCase("I PreFER PiZZa") << endl;
    cout << toUpperCase("E-E-E-C-S Is AmaZinG") << endl;
    
    
}