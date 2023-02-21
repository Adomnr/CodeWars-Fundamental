bool set_alarm(const bool& employed,const bool& vacation){
  if(employed == true && vacation == false)
    return true;
  return false;
}

//Test Cases
// TODO: Replace examples and use TDD development by writing your own tests

Describe(Set_Alarm)
{
    It(Test_Case)
    {
        Assert::That(set_alarm(true,true), Equals(false));
        Assert::That(set_alarm(false,true), Equals(false));
        Assert::That(set_alarm(false,false), Equals(false));
        Assert::That(set_alarm(true,false), Equals(true));
    }
};
