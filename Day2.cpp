/*Good morning! Here's your coding interview problem for today.

This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?*/

#include <iostream>
#include <vector>
#include <memory>


int main()
//This, once more is a very ugly solution, but I'll come back to it if I can
{
    int input[5] = {1,2,3,4,5};
    
    std::unique_ptr<std::vector<int>> inputList = std::make_unique<std::vector<int>>(input, std::end(input));
    std::unique_ptr<std::vector<int>> outputList = std::make_unique<std::vector<int>>();

    int i = 0;
    for(int n : *inputList) {
        int total = 1;
        int j = 0;
        for(int y : *inputList) {
            if(i != j) {total *= y;}
            j++;
        }
        outputList->push_back(total);
        i++;
    }

    int max = static_cast<int>((*inputList).size());
    for(i=0; i<5; i++) {
        std::cout << "(" << (*inputList)[i] << ", " << (*outputList)[i] << ")" << std::endl;
    }

}
