#include<iostream>
using namespace std;

int main(){
    cout<< "\n\n----------Welcome to you----------"<<endl;
    cout <<"\n__________NIC ASIA BANK__________"<<endl;
    int pin;
    int i=0;
    while (pin!=1234){
        cout<<"Please Enter you pin number:: ";
        cin >> pin;
        i++;
        if (i<5)
        {
            cout<<"Incorrect pin, please try again"<< endl;
        }
        else
        cout<< "you are out of tries.";
        exit(0);
        
    }
    

}