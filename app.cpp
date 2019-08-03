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
    string date;
    cout << "Current date : ";
    cin >> date;

    string accID = lname + fname + accNum;
    system("clear");

    cout << "Name : " << fname << ", " << lname << "\nDate : " << date << "\nBalance : " << bal << endl;
    char yn;
    cout << "[Y/n] ";
    cin >> yn;

    if(yn == 'y'){
        ofstream file;
        file.open(accID);
        file << "Name : " << fname << ", " << lname << "\nDate : " << date << "\nBalance : " << bal;
        file.close();
        main();
    } else if (yn == 'n'){
        add();
    }
    
    return 0;
}

int del(){
    system("clear");
    cout << "Please note this does not delete the file but deletes the data inside." << endl;
    string fname;
    string lname;
    string accNum;
    cout << "Enter the first name : ";
    cin >> fname;
    cout << "Last name : ";
    cin >> lname;
    cout << "Account number : ";
    cin >> accNum;

    string accID = lname + fname + accNum;

    ofstream ofs;
    ofs.open(accID, std::ofstream::out | std::ofstream::trunc);
    ofs.close();

    main();
    return 0;
}

int edit(){
    system("clear");
    string fname;
    string lname;
    string accNum;
    int bal;
    string date;
    cout << "Enter the first name : ";
    cin >> fname;
    cout << "Last name : ";
    cin >> lname;
    cout << "Account number : ";
    cin >> accNum;
    cout << "New balance : ";
    cin >> bal;
    cout << "Current date : ";
    cin >> date;

    string accID = lname + fname + accNum;

    ofstream file;
    file.open (accID);
    file << "Name : " << fname << ", " << lname << "\nDate : " << date << "\nBalance : " << bal;
    file.close();

    main();
    return 0;
}

int main(){
    system("clear");
    cout << "Options : " << endl
    << "1 --> Add a record" << endl
    << "2 --> Delete a record" << endl
    << "3 --> Edit a record" << endl
    << "4 --> Quit" << endl << endl;

    cout << "Enter an option : ";
    int option;
    cin >> option;

    if(option != 1 && option != 2 && option != 3 && option != 4){
        cout << "ERR: NOT AN OPTION" << endl;
        main();
    }

    if(option == 1){
        add();
    }

    if(option == 2){
        del();
    }

    if(option == 3){
        edit();
    }

    if (option == 4){
        return 1;
    }
    

    return 0;
}
