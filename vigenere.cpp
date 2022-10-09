#include "vigenere.h"
#include <cctype>
#include <string>

std::string encryptVigenere(std::string plaintext, std::string keyword){
    if(!isalpha(keyword[0]))
        return plaintext;
    
    std::string result = "";
    int count = 0;

    int number[keyword.length()];
    for(int x = 0; x < keyword.length(); x++){
        number[x] = (int)(tolower(keyword[x])) - 97;
    }

    for(int y = 0; y < plaintext.length(); y++){
        if(isalpha(plaintext[y])){
            if(isupper(plaintext[y])){
                if(plaintext[y] + number[count] <= 90)
                    result += plaintext[y] + number[count];
                else
                    result += 'A' + (91 - ((int)plaintext[y] + number[count]));
            }
            else{
                if(plaintext[y] + number[count] <= 122)
                    result += plaintext[y] + number[count];
                else
                    result += 'a' + (123 - ((int)plaintext[y] + number[count]));
            }

            count ++;
            if(count == keyword.length())
                count = 0;
        }
        else
            result += plaintext[y];
    }
    return result;
}
