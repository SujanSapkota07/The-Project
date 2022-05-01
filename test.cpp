//// including necessary header files
#include<iostream>
#include<fstream>
using namespace std;

//---------------------------------------------------------------
//list of all the functions
void main_menu();
int checkBalance();
void initial_deposite();
void TryAgain();
void showMenu();
//---------------------------------------------------------------

void showMenu()//the function contains all the menus...

{
        cout<< "\n\n\n\n\t----------welcome to you on online shopping application----------\n\n"<< endl;
    cout<<"\t--Please enter the respective number to take actions accordingly--"<<endl;
    cout << "1) Enter the initilal deposite"<< endl;
    cout << "2) Check the current balance"<< endl;
    cout << "3) purchase"<< endl;
    cout << "4) exit"<< endl;
    cout << "---------------------------------------------------------------------------"<<endl;
}
//---------------------------------------------------------------

    void main_menu(){
//following are the initials to display on the screen
    int FirstEntered,moneyDeposited;
    showMenu();
    cout<< "Here: ";
    cin >> FirstEntered;//promts the user to enter a number...
    switch (FirstEntered)
    {
    case 1:
        initial_deposite();// when pressed 1, it calls the function initial_deposite and execute further
        
         break;

    case 2:
    int checkMoney;
    checkMoney = checkBalance();//this will check the balance
    cout<< "you currently have Rs"<< checkMoney << endl;
    TryAgain();
    break;

    ////////case 3 is yet to program...

    case 4:
    exit(0);
    
    default:
    cout << "invalid number"<< endl;
    cout << "please run the program again "<< endl;
    break;
    }
}
//---------------------------------------------------------------
//try again menu
void TryAgain()
{
    int enter;
    cout<<"\nDo you want to exit the program or return to main menu"<< endl;
        cout << "1) return to main menu"<< endl;
        cout << "2) Exit the program" << endl;
        cout<< "Enter here: ";
        cin >> enter;
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
// a function which deal with the deposited money
void initial_deposite(){
int money, enter, initial_money;
cout << "Please enter the amount you want to enter:: ";
cin >> money;

// storing the the balance in a file..
// the account might have some money previously, so have to add money on that too..
    initial_money = checkBalance();//previous money will be stored here
        ofstream file;
        file.open("balanceCheck",ios::out);//opening the file in writing mode
        file << (money + initial_money);
        file.close();
TryAgain();
}

//---------------------------------------------------------------
// a function to check previous balance
int checkBalance()
{
    float checkMoney;
    ifstream bfile;
    bfile.open("balanceCheck", ios:: in);//opening file in reading mode
    bfile >> checkMoney; //storing the initial money one checkMoney
    bfile.close();
    return checkMoney;
}

int main()
{
    main_menu();
    return 0;
}

