#include "caesar.h"
#include <cctype>
#include <string>
#include <cmath>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
    char reminder = c;
    if(isalpha(c)){
        if(isupper(c)){
            if(rshift >= 0){
                if((int)c + rshift > 90)
                    return reminder = c + rshift - 26;
                }
            else{
                if((int)c + rshift < 65)
                    return reminder = 'Z' - (64 - ((int)c + rshift));
            }
        }
        else{
            if(rshift >= 0){
                if(int(c) + rshift > 122)
                    return reminder = c + rshift - 26;
            }
            else{
                if((int)c + rshift < 97)
                    return reminder = 'z' - (96 - ((int)c + rshift));
            }
        }
        return reminder + rshift;
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