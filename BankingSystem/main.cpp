#include <iostream>


using namespace std;
int account_number;
string username;
string username2;
int userpassword;
int password;

void security(){
cout<<"**************************EDISON THE LADIES MAN*********************************"<<endl;
cout<<"Welcome To Not Tryna Be Broke National Bank; Created By Pojito The Prince \n"<<endl;
cout<<"Please enter your account number: "<<endl;
cin>>account_number;

cout<<"Please enter your username: "<<endl;
cin>>username;

cout<<"Please enter your password: "<<endl;
cin>>password;
cout<<"**********************************************************************"<<endl;
cout<<"WELCOME "<<username<<" I Hope You Are Having A Great And Productive Day, What Would You Like To Do Today:"<<endl;

}
void showMenu() {
cout<<"**********Main Menu**********"<<endl;
cout<<"1. Check Balance?:\n "<<endl;
cout<<"2. Deposit Some Geld/Cash?:\n "<<endl;
cout<<"3. Withdraw Cash:\n "<<endl;
cout<<"4. Exit "<<endl;
cout<<"****************************"<<endl;

}


int main()
{
    //account number, username and password

    security();

    //deposit, withdraw,check balnce, show menu
    int option;
    double balance = 0;
do{
    showMenu();
    cout<<"Time To Choose Pal: \n"<<endl;
    cin>>option;

    switch (option){
    case 1:
        while(true)
        {
            cout<<"Enter your password: "<<endl;
            cin>>userpassword;
            if(userpassword == password )
            {
                cout<<"ACCESS GRANTED!\n"<<endl;
                cout<<"AVAILABLE BALANCE IS: R"<<balance<<endl;
                cout<<"******************************"<<endl;
                 break;
            }
            else
            {
                cout<<"INCORRECT PASSWORD YOU TWAT, TRY AGAIN \n"<<endl;
            }
        }
        break;

    case 2: cout<<"Sir/Lady, How much would you like to deposit: ";
    double depositmoney;
    cin>>depositmoney;
    balance += depositmoney;
    cout<<"DEPOSIT PROCESS WAS A SUCCESS. \n"<<endl;
    cout<<"CURRENT BALANCE IS R \n"<<balance<<endl;
    break;
        case 3: cout<<"How much are we taking out today: ";
    double withdrawalmoney;
    cin>>withdrawalmoney;
    if(withdrawalmoney<=balance)
    {
       balance -= withdrawalmoney;
    cout<<"WITHDRAWAL OF R"<<withdrawalmoney<<" WAS A SUCCESS"<<endl;
    cout<<"CURRENT BALANCE IS R"<<balance<<endl;
    }
    else
    {
     cout<<"DECLINED||INSUFFICIENT FUNDS||YOU DON'T HAVE MONEY HADE."<<endl;
    }

    break;

    }
    } while(option != 4);




    return 0;
}
