#include<iostream>
using namespace std;

class Hospital {
    int ID;
    char name[20], address[30];
    public: 
        void getdata();
        void showdata(); 
};
void Hospital :: getdata()
{
    cout << "Enter name: "<< endl;
    cin >> name;
    cout << "Enter id: "<< endl;
    cin >> ID;
    cout << "Enter address: "<< endl;
    cin >> address;

}
void Hospital :: showdata()
{
    cout << "name: " << name << endl << "ID: " << ID << endl << "Address: " << address << endl;  
}

int main()
{
    Hospital h1, h2;
    h1.getdata();
    h1.showdata();


}