#include <iostream>

void choice();
void balanceCheck(int balance);
int withdraw(int balance);
int deposit(int balance);
void quit();

int main ()
{
    std::cout << "---------------------------\n";
    std::cout << "    Welcome to the Bank    \n";
    std::cout << "---------------------------\n";
    
    choice();
}

void choice (){
    int choice;
    
    int balance=0;
    int midBalance;
    int amount;
    
    bool isItValid = true;
    
    std::cout<< "1-Balance Check\n2-Deposit Money\n3-Whithdraw Money\n4-Quit\n";
    while (isItValid) {
        std::cout << "Please press the number of the option you want to perform: ";
        std::cin >>choice;
        
        switch (choice){
            case 1:balanceCheck(balance);
                break;
            case 2:balance = deposit(balance);
                break;
            case 3:balance=withdraw(balance);
                break;
            case 4:quit();
                isItValid = false;
                break;
            default:std::cout<<"You have pressed an unknown option.\nPlease try again.\n";
                break;
        }
    }
}
void balanceCheck(int balance){
    std::cout << "Your current balance : "<<balance<<'\n';
}
int deposit(int balance){
    int amount;
    bool isValid = true;

    do {
        std::cout << "Enter the amount you want to deposit: ";
        std::cin >> amount;
        
        if (amount<0){
            std::cout <<"You can not deposit a negative amount of money. Please try again.\n";
        }
        else{
            balance+=amount;
            
            int choice;
            
            bool isPressedCorrectly = true;
            
            std::cout <<"Deposit successfuly.";
            
            do{
                std::cout <<"Press '1' to return menu, '2' to deposit again: ";
                std::cin >> choice;
                
                if (choice == 1) {
                    isValid = false;
                    isPressedCorrectly = false;
                }
                else if(choice == 2){
                    isPressedCorrectly = false;
                }else{
                    std::cout<<"You have pressed an unknown option.\nPlease try again.\n";
                }
            }while(isPressedCorrectly);
            
        }
    } while (isValid);
    
    return balance;
}
int withdraw(int balance){
    int amount;
    
    int choice;
    
    bool isValid = true;

    do {
        std::cout << "Enter the amount you want to withdraw: ";
        std::cin >> amount;
        
        if (amount<0){
            std::cout <<"You can not withdraw a negative amount of money. Please try again.\n";
        }
        else if(amount>balance){
            std::cout << "insufficient balance. Please try again. \n";
        }
        else{
            bool isPressedCorrectly = true;
            std::cout <<"Withdraw successful.";
            balance-=amount;
            
            do{
                std::cout <<"Press '1' to return menu, '2' to withdraw again: ";
                std::cin>> choice;
                
                if (choice == 1) {
                    isValid = false;
                    isPressedCorrectly = false;
                }
                else if(choice == 2){
                    isPressedCorrectly = false;
                }else{
                    std::cout<<"You have pressed an unknown option.\nPlease try again.\n";
                }
            }while(isPressedCorrectly);

        }
    } while (isValid);
    
    return balance;
}
void quit(){
    std::cout << "Thanks for choosing our bank. Have a nice day.";
}





