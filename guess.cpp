#include <iostream>

int main() {
  // Write code here
 int answer = 64;
 int guess;
   
 while(guess != answer){
     std::cout << "Enter your guess: ";
     std::cin >> guess;
     if(guess < answer){
         std::cout << "Your guess is too low." << std::endl;
     }
     else if(guess > answer){
         std::cout << "Your guess is too high." << std::endl;
     }
     else{
         std::cout << "Congrats! You guessed the number." << std::endl;
     }
 }
  return 0;
    
    
}