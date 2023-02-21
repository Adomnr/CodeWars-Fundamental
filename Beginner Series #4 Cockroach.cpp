int cockroach_speed(double s)
{
    return s*27.7778;
    //Good Luck!
}

//Test Cases
Describe(Sample_Tests)
{
    It(Basic_Tests)
    {
        Assert::That(cockroach_speed(1.08), Equals(30));
        Assert::That(cockroach_speed(1.09), Equals(30));
        Assert::That(cockroach_speed(0),    Equals(0));
    }
};
