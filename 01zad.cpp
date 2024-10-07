#include <iostream>

unsigned FindFac(unsigned n){
    if(n == 0)
        return 1;
    return n*FindFac(n-1);
};

unsigned FindFib (unsigned n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return FindFib(n-1) + FindFib(n-2);     
    
}

int main(){
    std::cout << 13/2;
};