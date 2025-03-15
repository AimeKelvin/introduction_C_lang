#include <iostream>

int main() {
int score;
int answer;

std::cout<<"What is the name of the Wordls longest river? \n";
std::cout<<"1. Amazon \n";
std::cout<<"2. Nile \n";
std::cout<<"3. Yangtze \n";
std::cout<<"4. Mississippi \n";
std::cin>>answer;

if(answer == 2){
    std::cout<<"Correct! \n";
    score = score + 5;
}
else{
    std::cout<<"Incorrect! \n";
    std::cout<<"The correct answer is Nile \n";
}

std::cout<<"How many bones are in the human body? \n";
std::cout<<"1. 206 \n";
std::cout<<"2. 208 \n";
std::cout<<"3. 210 \n";
std::cout<<"4. 212 \n";
std::cin>>answer;

if(answer == 1){
    std::cout<<"Correct! \n";
    score = score + 5;
}
else{
    std::cout<<"Incorrect! \n";
    std::cout<<"The correct answer is 206 \n";

}
std::cout<<"Your final score is: " << score << "\n";

}