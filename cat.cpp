#include <iostream>

int main() {
   int cat;
  int human;
  // Write code here
  std::cout<<"Welcome to the Cat Years program!.";
std::cout<<"How old is your cat? : ";
  std::cin>>cat;
  human = (cat-2)*4 + 24;

  std::cout<<"You cat is "<<human<<" years old in Human years.";
}