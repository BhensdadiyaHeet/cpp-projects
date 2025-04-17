#include<iostream>
using namespace std;
#include<string.h>

class BankAccount{
    private :
        int AccountNo;
        char AccountHolderName[50];
        int Balance;
    
    public :
        BankAccount(int AccountNo, const char *AccountHolderName, float Balance)
        {

        this->AccountNo = AccountNo;
        strcpy(this->AccountHolderName, AccountHolderName );
        this->Balance = Balance;
        }  

};

int main(){

    
    return 0;

}
