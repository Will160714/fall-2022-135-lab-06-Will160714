#include "caesar.h"
#include <cctype>
#include <string>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
    char reminder = c;
    if(isalpha(c)){
        if(isupper(c)){
            if((int)c + rshift > 90)
                reminder = c + rshift - 26;
            else
                reminder = c + rshift;
        }
        else{
            if(int(c) + rshift > 122)
                reminder = c + rshift - 26;
            else
                reminder = c + rshift;
        }
    }
    return reminder;
}

// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift){
    std::string result = "";
    for(int x = 0; x < plaintext.length(); x ++){
            result += shiftChar(plaintext[x], rshift);
    }
    return result;
}