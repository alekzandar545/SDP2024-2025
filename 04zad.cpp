#include <iostream>

void swap (char* str, unsigned i1, unsigned i2){
    char temp = str[i1];
    str[i1] = str[i2];
    str[i2] = temp;
}

void GeneratePermutations(char* str, const unsigned size, const unsigned pos){
    if(pos == size){
        std::cout << str << std::endl;
        return;
    }  
    for (size_t i = pos; i < size; i++)
    {
        swap(str, pos, i);
        GeneratePermutations(str, size, pos + 1);
        swap(str, pos, i);
    }


};

int main(){
    unsigned size;
    std::cin >> size;
    char* str = new(std::nothrow) char[size];
    if(!str){
        std::cout << "Memory error!";
        return 0;
    }
    std::cin >> str;
    GeneratePermutations(str, size, 0);

    delete str;
    return 0;
}