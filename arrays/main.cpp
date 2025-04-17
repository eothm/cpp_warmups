#include <iostream>
#include <vector>
#include <limits>

void switchs(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
}
void reverseVector(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        switchs(arr[i], arr[n - i - 1]);
    }
}
int findMaxElement(std::vector<int> arr) {
    if (arr.empty()) {
        throw std::invalid_argument("Array is empty");
    }

    int maxElement = std::numeric_limits<int>::min();
    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num;
        }
    }
    return maxElement;
}

float average(std::vector<int> arr){
    int sum =0;
    for (int i=0; i<arr.size();i++){
        sum+=arr[i];
    }
    return (float)sum/arr.size();
}

float standardDeviation (std::vector<int> arr, float averge){
    float sum =0;
    for (int i=0; i<arr.size();i++){
        sum+= abs(arr[i]-averge);
    }
    return sum/arr.size();
}

int howMany(std::vector<int> arr, int n){
    int count =0;
    for (int i=0; i<arr.size();i++){
        if(arr[i]==n){
            count++;
        }
    }
    return count;
}

bool isSorted(std::vector<int> arr){
    for (int i=0; i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size;
    std::vector<int> numbers(size);
    std::cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }
    try {
        int maxElement = findMaxElement(numbers);
        std::cout << "The maximum element is: " << maxElement << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    reverseVector(numbers);
    std::cout << "Reversed array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Average: " << average(numbers) << std::endl;
    std::cout << "Standard Deviation: " << standardDeviation(numbers, average(numbers)) << std::endl;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The number " << n << " appears " << howMany(numbers, n) << " times in the array." << std::endl;
    std::cout << "The array is " << (isSorted(numbers) ? "sorted." : "not sorted.") << std::endl;
    return 0;
}