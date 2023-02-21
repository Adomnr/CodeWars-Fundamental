bool hero(int bullets, int dragons) {
  if(bullets >= (dragons*2))
    return true;
  return false;
}

//Test Cases
Describe(Sample_tests)
{
    It(Tests)
    {
        Assert::That(hero(10, 5), Equals(true));
        Assert::That(hero(7, 4), Equals(false));
        Assert::That(hero(4, 5), Equals(false));
        Assert::That(hero(100, 40), Equals(true));
        Assert::That(hero(1500, 751), Equals(false));
        Assert::That(hero(0, 1), Equals(false));
    }
};
