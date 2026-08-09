#include <iostream>
#include<string>
using namespace std;

class bank{
private:
    string accountholder;
    double balance;
public:
    bank(string accountholder,double balance){
        this->accountholder=accountholder;
        this->balance=balance;
        }
        string getHolderName(){
            return accountholder;

        };

        double getBalance(){
            return balance;

        };
        bank(const bank &oldname){
            this->accountholder=oldname.accountholder;
            this->balance=oldname.balance;


        }

};

int main()
{
    bank s1("Nauman",500.34);
    bank s2(s1);
   cout<<s2.getHolderName()<<endl;
   cout<<s1.getBalance();

    return 0;
}
