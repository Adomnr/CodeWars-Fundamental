#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
    int sum = 0;
    int largest = -1000;
    int smallest = 1000;
    
    if(numbers.size() == 0 || numbers.size() == 1){
      return 0;
    }
    int n = numbers.size();
    for (int i=0; i<n; i++){
      sum += numbers[i];
      if (largest < numbers[i]){
        largest = numbers[i];
      }
      if (smallest > numbers[i]){
        smallest = numbers[i];
      }
    }
    return sum - smallest - largest;
}

/*
Describe(ExampleTests)
{
    It(Test1)
    {
        Assert::That(sum({ 6, 2, 1, 8, 10 }), Equals(16));
        Assert::That(sum({ 1, 1, 11, 2, 3 }), Equals(6));
    }
};
*/
