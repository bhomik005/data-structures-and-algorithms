#include <iostream>

int main() {
    int arr[] = {1, 3, 5};
    for(int i = 0; i < 3; i++){
        std::cout << "Address of element " << arr[i] << " is " << &arr[i] << '\n';
    }
    // 1 byte = 8 bits
    // 4 bytes = 8 * 4 = 32 bits (an integer takes 4 bytes or 32 bits in memory)
    std::cout << "You can see the addresses are incrementing by 4 bytes which means an integer takes 4 bytes in memory\n";
    return 0;
}