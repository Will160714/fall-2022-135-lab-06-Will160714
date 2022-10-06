#include <string>
#include <cctype>
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    return encryptCaesar(ciphertext, -1 * rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    if(!isalpha(keyword[0]))
        return ciphertext;
    
    std::string result = "";
    int count = 0;

    int number[keyword.length()];
    for(int x = 0; x < keyword.length(); x++){
        number[x] = (int)(tolower(keyword[x])) - 97;
    }

    for(int y = 0; y < ciphertext.length(); y++){
        if(isalpha(ciphertext[y])){
            if(isupper(ciphertext[y])){
                if(ciphertext[y] - number[count] >= 65)
                    result += ciphertext[y] - number[count];
                else
                    result += "Z" - (65 - (ciphertext[y] - number[count]));
            }
            else{
                if(ciphertext[y] - number[count] >= 97)
                    result += ciphertext[y] - number[count];
                else
                    result += "z" - (97 - (ciphertext[y] - number[count]));
            }

            count ++;
            if(count == keyword.length())
                count = 0;
        }

        else
            result += ciphertext[y];
    }

    return result;
}