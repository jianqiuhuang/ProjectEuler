#include<iostream>
#include<vector>
#define DEBUG 0
int main(int argc, char **argv){
  std::vector<int> primeFactors;
  long long number = 600851475143;
  long long testNumber = number;
  int factor = 2;
  while(number > 1){
    while(number % factor == 0){
      primeFactors.push_back(factor);
      number /= factor;
    }
    if(number < factor * factor){
      primeFactors.push_back(number);
      break;
    }
    factor++;
  }
  if(DEBUG){
    std::cout << "Printing data in vector primeFactors" << std::endl;
    for(int i = 0; i < (int) primeFactors.size(); i++){
      std::cout << primeFactors[i] << std::endl;
    }
  }
  std::cout << "The largest prime factor of " << testNumber << " is " << primeFactors.back() << std::endl;
  return 0;
}
