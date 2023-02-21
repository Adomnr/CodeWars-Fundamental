#include <vector>
#include <cmath>

int square_sum(const std::vector<int>& numbers)
{
    int result = 0;
    int len = numbers.size();
    for(int i=0; i<len; i++){
      result+=pow(numbers[i],2);
    }
    return result;
}

//Test Cases

Describe(test_square_sum)
{
    It(should_pass_some_basic_tests)
    {
        Assert::That(square_sum({1, 2}), Equals(5));
        Assert::That(square_sum({0, 3, 4, 5}), Equals(50));
        Assert::That(square_sum({}), Equals(0));
    }
};
