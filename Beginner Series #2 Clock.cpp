// Function 
int past(int h, int m, int s) {
  // your code here
  int result;
  if(h <= 23 && h >= 0){
    if(m <= 59 && m >= 0){
      if(s <= 59 && s>=0){
        result = (h *60*60*1000)+ (m*60*1000)+ (s*1000);
      }
    }
  }
  return result;
}

/*
Describe(Clock) {
  It(BasicTests) {
    Assert::That(past(0, 1, 1), Equals(61000));
    Assert::That(past(1, 1, 1), Equals(3661000));
    Assert::That(past(0, 0, 0), Equals(0));
    Assert::That(past(1, 0, 1), Equals(3601000));
    Assert::That(past(1, 0, 0), Equals(3600000));
  }
};
*/
