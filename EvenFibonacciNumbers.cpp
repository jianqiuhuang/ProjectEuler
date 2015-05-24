#include<iostream>

int main(int argc, char **argv){
  int max = 4000000;
  int sum = 0;
  int currentTerm = 0, firstTerm = 1, secondTerm = 2;
  while(currentTerm < max){
    if(currentTerm % 2 == 0)	
      sum += currentTerm;
    currentTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = currentTerm;
  }
  std::cout << "The sum of the even-valued fibonacci terms whose values do not exceed 4,000,000 is " << sum << std::endl;
  return 0;
}


