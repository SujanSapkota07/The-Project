//// including necessary header files
#include<iostream>
#include<fstream>
using namespace std;
//---------------------------------------------------------------
//---------------------------------------------------------------
//list of all the functions
void main_menu();
int checkBalance();
void initial_deposite();

//---------------------------------------------------------------
//---------------------------------------------------------------
//the function contains all the menus...
void main_menu(){
    //following are the initials to display on the screen
    int FirstEntered,moneyDeposited;
    
    cout<< "\n\n\n\n\t----------welcome to you on online shopping application----------\n\n"<< endl;
    cout<<"\t--Please enter the respective number to take actions accordingly--"<<endl;
    cout << "1) Enter the initilal deposite"<< endl;
    cout << "2) Check the current balance"<< endl;
    cout << "3) purchase"<< endl;
    cout << "4) exit"<< endl;
    cout << "---------------------------------------------------------------------------"<<endl;

    cout<< "Enter here: ";
    cin >> FirstEntered;//promts the user to enter a number...
    switch (FirstEntered)
    {
    case 1:
        initial_deposite();// when pressed 1, it calls the function initial_deposite and execute further
        
         break;
    
    default:
    cout << "invalid number"<< endl;
        break;
    }
}


//---------------------------------------------------------------
// a function to check previous balance
int checkBalance()
{
    float checkMoney;
    fstream bfile;
    bfile.open("balanceCheck", ios:: in);
    bfile >> checkMoney;
    return checkMoney;
}

//---------------------------------------------------------------
// a function which deal with the deposited money
void initial_deposite(){
int money, enter, initial_money;
cout << "Please enter the amount you want to enter:: ";
cin >> money;
cout << "\n\nyou have succssively added Rs"<< money << endl;
cout<<"\nDo you want to exit the program or return to main menu"<< endl;
        cout << "1) return to main menu"<< endl;
        cout << "2) Exit the program" << endl;
        cout<< "Enter here: ";
        cin >> enter;
// storing the the balance in a file..
// the account might have some money previously, so have to add money on that too..
    initial_money = checkBalance();//previous money will be stored here
        fstream file;
        file.open("balanceCheck",ios::out);
        file << (money + initial_money);
        if (enter == 1)
        {
            main_menu();
        }
        else
        {
            exit(0);
        }

}



//---------------------------------------------------------------
int main(){
    main_menu();
    
    
    return 0;
}

