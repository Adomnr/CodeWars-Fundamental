#include <string>

std::string removeExclamationMarks(std::string str){
  //your code here
  std::string result;
  for (int i=0, len= str.length(); i<len; i++){
    if(str[i] == '!'){
      continue;
    }
    else
      result += str[i];
  }
  return result;
}
/*
Describe(RemoveExclamationMarks){
  It(BasicTests){
    Assert::That(removeExclamationMarks("Hello World!"), Equals("Hello World"));
    Assert::That(removeExclamationMarks("Hello World!!!"), Equals("Hello World"));
    Assert::That(removeExclamationMarks("Hi! Hello!"), Equals("Hi Hello"));
    Assert::That(removeExclamationMarks("Hi!!! Hello!"), Equals("Hi Hello"));
    Assert::That(removeExclamationMarks("Hi! He!l!lo!"), Equals("Hi Hello"));
  }
};
*/
