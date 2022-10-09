#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("Task B"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("!", 1) == "!");
    CHECK(encryptCaesar("Hello, World!", 0) == "Hello, World!");
    CHECK(encryptCaesar("W", 5) == "B");
}

TEST_CASE("Task C"){
    CHECK(encryptVigenere("", "cake") == "");
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Hello, World!", " ") == "Hello, World!");
    CHECK(encryptVigenere("Test", "") == "Test");
    CHECK(encryptVigenere(";", "hi") == ";");
    CHECK(encryptVigenere("P", "eat") == "T");
    CHECK(encryptVigenere("Z", "b") == "A"); 
}

TEST_CASE("Task D"){
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("", 1) == "");
    CHECK(decryptCaesar("sdas", 0) == "sdas");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("", "cake") == "");
    CHECK(decryptVigenere("Sadwe", " ") == "Sadwe");
    CHECK(decryptVigenere(";", "hi") == ";");
    CHECK(decryptVigenere("Ab", "ac") == "Az"); 
    CHECK(decryptVigenere("ab", "bc") == "zz");
    CHECK(decryptVigenere("AB", "BD") == "ZY");
}


