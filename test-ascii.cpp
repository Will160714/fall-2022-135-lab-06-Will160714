#include <iostream>
#include <string>

int main(){
    std::string input = "Cat :3 Dog";
    for(int x = 0; x < input.length(); x++){
        std::cout << input[x] << " " << (int)(input[x]) << std::endl;
    }

    return 0;
}