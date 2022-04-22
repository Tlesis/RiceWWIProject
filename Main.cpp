#include "Info.h"

#include <iostream>

int main() {
    std::cout << "\nDate Style: Month dd, yyyy\n\n";
    // March 13, 1881 (Assassination of Alexander II)
    // August 28, 1915 (WWI)
    // March 16, 1917 (February Revolution)
    // November 7, 1917 (October Revolution)
    // March 3, 1918 (Treaty of Brest-Litovsk)
    // December 15, 1920 (Civil War)
    // March 20, 1920 (General Bolsheviks Rule)
    while (true) {
        std::cout << getInfo(request()) << std::endl;
    } 
}