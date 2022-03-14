#include <vector>
#include <numeric>
#include <iostream>

float mean(std::vector<float> nums) {
    int numEl = nums.size();
    float sumEls = std::accumulate(nums.begin(), nums.end(), decltype(nums)::value_type(0));
    float avgMean = sumEls / numEl;
    return avgMean;
}


int main()
{
    std::vector<float> numbers = { 1, 6.0, 2, 3, 4, 5, 6.5, 19, 400, 3.14, 0.6 };     // Float type to take integers without dropping the decimals
    std::vector<float> numbers2 = { 6, 5.0, 4, 7.77777, 3.45689, 10.10 };
    std::vector<float> numbers3 = { 1 };
    std::vector<float> numbers4 = {};                                               // Empty vector, checking for bugs

    float meanNum = mean(numbers);
    float meanNum2 = mean(numbers2);
    float meanNum3 = mean(numbers3);
    float meanNum4 = mean(numbers4);

    std::cout << "The mean from given numbers is: " << meanNum << std::endl;
    std::cout << "The mean from given numbers is: " << meanNum2 << std::endl;
    std::cout << "The mean from the single number is: " << meanNum3 << std::endl;
    std::cout << "The mean from no numbers is: " << meanNum4 << std::endl;           // -nan(ind) as no value

    return 0;
}

