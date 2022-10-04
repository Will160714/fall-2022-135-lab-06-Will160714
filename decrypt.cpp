#include <string>
#include <cctype>
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    return encryptCaesar(ciphertext, -1 * rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    return "";
}