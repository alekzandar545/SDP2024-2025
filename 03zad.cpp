#include <iostream>

int BinarySearch(const int* arr, const unsigned size, const int num, unsigned start, unsigned end){
    unsigned pos = (start + end)/2;
    if(arr[pos] == num)
        return pos;
    else if(start >= end){
        return -1;
    }
    else {
        if(arr[pos] > num)
            BinarySearch(arr, size, num, 0, pos-1);
        else
            BinarySearch(arr, size, num, pos+1, size-1);
    }

};

int main(){
    unsigned size;
    std::cin >> size;
    int* arr = new(std::nothrow) int[size];
    if(!arr){
        std::cout << "Memory error!";
        return 0;
    }
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    int num;
    std::cin >> num;
    std::cout << BinarySearch(arr, size, num, 0, size-1);
    delete arr;
    return 0;
};