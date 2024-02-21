#include <iostream>

int main() {

    //4 byte long int gets the value of 25 put into a memory address
    int x = 25;

    //a pointer object is 8 bytes
    //stores the memory address of x (&x == get x's addr), the value of that int is still 4 bytes
    //*ptr is dereferencing ptr and selecting the VALUE of ptr, not the memory address
    //so this literally reads as:
    //set the VALUE of ptr to be the MEMORY ADDRESS of x
    //is 0xffffff / a reference object a string? just a bunch of binary and converted to 0x hex?
    int *ptr = &x;

    std::cout
    << "x value: " << x
    << "\nx addr: " << &x
    << "\nbyte size x: " << sizeof x
    << std::endl;

    std::cout
    << "\nptr value: " << *ptr
    << "\nptr addr: " << &ptr
    << "\nbyte size ptr: " << sizeof ptr
    << std::endl;

    ptr++;
    std::cout << *ptr << std::endl;

    //commented, terrible idea to do this, you do not know specifically what this addr is
    //DANGEROUS!!
    //*ptr = 44;
    //std::cout << *ptr << std::endl;

    return 0;
}
