#include <string>
using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  string result;
  for (int i=0,len=str.length(); i<len; i++){
    result += str[len-i-1];
  }
  return result ;
}

/*
  Describe(Reverse_String)
{
    It(Check_Short_Words)
    {
        Assert::That(reverseString("hello"), Equals("olleh"));
        Assert::That(reverseString("rat"), Equals("tar"));
        Assert::That(reverseString("alpha"), Equals("ahpla"));
    }
    It(Check_Longer_Words)
    {
        Assert::That(reverseString("codewars"), Equals("srawedoc"));
        Assert::That(reverseString("football"), Equals("llabtoof"));
        Assert::That(reverseString("translation"), Equals("noitalsnart"));
    }
};
*/
