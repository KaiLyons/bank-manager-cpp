#include <iostream>
#include <fstream>
using namespace std;


int a = 0;
int main();

int add(){
    system("clear");
    string accNum;
    int bal;
    string fname;
    string lname;
    cout << "New account number : ";
    cin >> accNum;
    cout << endl;
    cout << "Enter first name : ";
    cin >> fname;
    cout << endl;
    cout << "Enter last name : ";
    cin >> lname;
    cout << "Enter balance : ";
    cin >> bal;

    string accID = lname + fname + accNum;
    system("clear");

    cout << "Is this information good?"<< endl <<
    "Name : " << lname << ", " << fname << endl <<
    "Account number : " << accNum << endl <<
    "Balance : " << bal << endl << endl;
    char yn;
    cout << "[Y/n] ";
    cin >> yn;

    if(yn == 'y'){
        ofstream file;
        file.open(accID);
        file << lname << " : " << fname << " : " << accNum << " : " << bal;
        file.close();
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

    if (option == 6){
        return 1;
    }
    

    return 0;
}
