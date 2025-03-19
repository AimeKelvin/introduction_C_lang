#include <iostream>

int main (){
    int num1;
    int num2;
    int sign;
    int answer;

    std::cout<<"Enter what operator you want to use. choose a number\n";
    std::cout<<"1) Addition (+)\n";
    std::cout<<"2) Subtraction (-)\n";
    std::cout<<"3) Multiplication (*)\n";
    std::cout<<"4) Division (/)\n";
    std::cout<<"5) Modulus (%)\n";

    std::cout<<"You choose: ";
    std::cin>>sign;

    std::cout<<"Enter the first number: \n";
    std::cin>>num1;
    std::cout<<"Enter the second number: \n";
    std::cin>>num2;

    if(sign == 1){
     answer = num1 + num2;
     std::cout<<num1 <<" + "<<num2<<" = "<<answer;
    }else if(sign == 2){
        answer = num1 - num2;
        std::cout<<num1 <<" - "<<num2<<" = "<<answer;
    }else if(sign == 3){
        answer = num1 * num2;
        std::cout<<num1 <<" * "<<num2<<" = "<<answer;
    }else if(sign == 4){
        answer = num1 / num2;
        std::cout<<num1 <<" / "<<num2<<" = "<<answer;
    }else if(sign == 5){
        answer = num1 % num2;
        std::cout<<"The remainder is "<<answer;
    }

    
}