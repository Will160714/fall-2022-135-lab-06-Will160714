#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << "encryptCaesar('Way to Go!', 5): " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "encryptVigenere('Hello, World!', 'cake'): " << encryptVigenere("Hello, World!", "cake") << std::endl;
  std::cout << "decryptCaesar('Bfd yt Lt!', 5): " << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
  std::cout << "decryptVigenere('Jevpq, Wyvnd!', 'cake'): " << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
  return 0;
}
