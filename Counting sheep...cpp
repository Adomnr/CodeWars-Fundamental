#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count =0;
  for(int i=0; i <arr.size(); i++){
    if(arr[i] == true)
      count++;
  }
  return count;
}

//Test Cases
#include <vector>

using namespace std;           

Describe(count_sheep_method)
{
    It(array_one)
    {
        vector<bool> array1 = { true,  true,  true,  false,
                                  true,  true,  true,  true ,
                                  true,  false, true,  false,
                                  true,  false, false, true ,
                                  true,  true,  true,  true ,
                                  false, false, true,  true };
        Assert::That(count_sheep(array1), Equals(17));
    }
};
