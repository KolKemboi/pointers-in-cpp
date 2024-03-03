#include <iostream>

int main(){
    int n;
    n = 10;
    int* ptr = &n;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
}