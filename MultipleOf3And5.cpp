#include<iostream>

int main(int argc, char **argv){
  int max = 1000;
  int sum = 0;
  for(int i = 1; i < max; i++){
    if(i % 3 == 0 || i % 5 == 0)
	sum += i;	
  }
  std::cout << "The sum of all the multiples of 3 or 5 below " << max << " is " << sum << std::endl;
  return 0;
}
