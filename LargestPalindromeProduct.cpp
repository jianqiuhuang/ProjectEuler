#include<iostream>

bool isPalindrome(int num){
  int tmp = num;
  int reverseNum = 0;
  int digit = 0;
  while(tmp > 0){
    digit = tmp % 10;
    reverseNum = reverseNum * 10 + digit;
    tmp /= 10;
  }
  return (reverseNum == num ? true : false);
}

int main(int argc, char **argv){
 int maxPalindrome = 0;
 int tmp = 0;
 for(int i = 999; i > 100; i--){
   for(int j = i; j > 100; j--){
     tmp = j * i;
     if(isPalindrome(tmp) && tmp > maxPalindrome)
       maxPalindrome = tmp;	
   }
 } 
 std::cout << "The largest palindrome made from the product of two 3-digit numbers is " << maxPalindrome << std::endl;
  return 0;
}
