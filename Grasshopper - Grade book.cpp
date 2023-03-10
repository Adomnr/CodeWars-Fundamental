char getGrade(int a, int b, int c) {
  // your code here
  int result = (a+b+c)/3;
  char grade = ' ';
  if(result >=90 && result <=100) grade = 'A';
  if(result >= 80 && result <90) grade = 'B';
  if(result >= 70 && result <80) grade = 'C';
  if(result >= 60 && result <70) grade = 'D';
  if(result >= 0 && result <60) grade = 'F';
  return grade;
}

//Test Cases
Describe(GradeBook) {
  It(ShouldReturnA) {
    Assert::That(getGrade(95, 90, 93), Equals('A'));
    Assert::That(getGrade(100, 85, 96), Equals('A'));
    Assert::That(getGrade(92, 93, 94), Equals('A'));
    Assert::That(getGrade(100, 100, 100), Equals('A'));
  }
  It(ShouldReturnB) {
    Assert::That(getGrade(70, 70, 100), Equals('B'));
    Assert::That(getGrade(82, 85, 87), Equals('B'));
    Assert::That(getGrade(84, 79, 85), Equals('B'));
  }
  It(ShouldReturnC) {
    Assert::That(getGrade(70, 70, 70), Equals('C'));
    Assert::That(getGrade(75, 70, 79), Equals('C'));
    Assert::That(getGrade(60, 82, 76), Equals('C'));
  }
  It(ShouldReturnD) {
    Assert::That(getGrade(65, 70, 59), Equals('D'));
    Assert::That(getGrade(66, 62, 68), Equals('D'));
    Assert::That(getGrade(58, 62, 70), Equals('D'));
  }
  It(ShouldReturnF) {
    Assert::That(getGrade(44, 55, 52), Equals('F'));
    Assert::That(getGrade(48, 55, 52), Equals('F'));
    Assert::That(getGrade(58, 59, 60), Equals('F'));
    Assert::That(getGrade(0, 0, 0), Equals('F'));
  }
};
