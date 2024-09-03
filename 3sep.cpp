#include <iostream>
#include <array>

int main() {
 
    std::array<int, 5> arr;
    
    arr.fill(10);

    std::cout << "Element at index 2: " << arr.at(2) << std::endl;
    
    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    std::cout << "Array size: " << arr.size() << std::endl;

    std::cout << "Elements in the array: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements in reverse order: ";
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Element at index 3: " << arr[3] << std::endl;

    return 0;
}