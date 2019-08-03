#include <iostream>
using namespace std;

int main();

int add(){
    system("clear");
    int accNum;
    int bal;
    string name;
    cout << "New account number : ";
    cin >> accNum;
    cout << endl;
    cout << "Enter name : ";
    cin >> name;
    cout << endl;
    cout << "Enter balance : ";
    cin >> bal;

    system("clear");

    cout << "Is this information good?"<< endl <<
    "Name : " << name << endl <<
    "Account number : " << accNum << endl <<
    "Balance : " << bal << endl << endl;
    char yn;
    cout << "[Y/n] ";
    cin >> yn;

    if(yn == 'y'){
        main();
    } else if (yn == 'n'){
        add();
    }
    
    return 0;
}

int main(){
    system("clear");
    cout << "Options : " << endl
    << "1 --> Add a record" << endl
    << "2 --> Delete a record (NOT READY)" << endl
    << "3 --> List records (NOT READY)" << endl
    << "4 --> Search records(NOT READY)" << endl
    << "5 --> Edit a record(NOT READY)" << endl
    << "6 --> Quit" << endl << endl;

    cout << "Enter an option : ";
    int option;
    cin >> option;

    if(option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6){
        cout << "ERR: NOT AN OPTION" << endl;
        main();
    }

    if(option == 1){
        add();
    }

    return 0;
}
