#include <iostream>



int getDigits(const int digits);
int sumOddDigits(const std::string cardNumbers);
int sumEvenDigits(const std::string cardNumbers);




int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter your card numbers: ";
    std::cin >> cardNumber;


    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << "Your card numbers is valid\n";
    }
    else{
       std::cout << "Card number is not valid\n";
    }


    return 0;
};



int getDigits(const int number){

    return number % 10 + (number / 10 % 10);
};

int sumOddDigits(const std::string cardNumbers){
    int sum = 0;

    for(int i =  cardNumbers.size()-1 ; i >= 0; i -= 2){
        sum += cardNumbers[i] - '0';
    }
    return sum;
};

int sumEvenDigits(const std::string cardNumbers){

    int sum = 0;

    for(int i =  cardNumbers.size()-2 ; i >= 0; i -= 2){
        sum += getDigits((cardNumbers[i] - '0' ) * 2 );
    }
    return sum;
};