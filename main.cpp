#include <iostream>

/*
    A small mini project because i am bored

    Made by kittyy12
*/

int main(int argc, const char* argv[]) {
    argc = 1;

    if(argv[1] == NULL) {
        std::cout << "./spammer 'i love cats'" << '\n';
        return 0;
    }

    else {
        
        while (true) {
            
            std::cout << argv[1] << '\n';
        
        }

    }
    
    return 0;
}