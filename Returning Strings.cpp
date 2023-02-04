#include <string>

std::string greet(const std::string& n){
  std::string m = "Hello, ";
  std::string o = " how are you doing today?";
  return m+n+o;
}

/*
Describe(Greet)
{
    It(BasicTests)
    {
        Assert::That(greet("Ryan"), Equals("Hello, Ryan how are you doing today?"));
        Assert::That(greet("Shingles"), Equals("Hello, Shingles how are you doing today?"));
    }
};
*/
