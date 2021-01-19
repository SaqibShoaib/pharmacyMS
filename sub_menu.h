#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include "search.h"
using namespace std;

void sub_menu()
{
    bool quit = true;
    int option;
    do
    {
        cout << "\n\t\t\tWelcome to Medicine Search Panel\n\n";
        cout << "1. Search Medicine By it's Refrence ID \n";
        cout << "2. Search Medicine By it's Name \n";
        cout << "3. Search Medicine By it's Company \n";
        cout << "4. Search Medicine By it's Formula \n";
        cout << "5. Quit The Medicine Search Panel\n";
        cout << "Type Your Choice Here: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout <<"\n\n\t\t\tHere is The List of Medicine\n\n";
            search_by_id();
            cout << "MedID\t\tMedicine Name\t\tManufacturer\t\tFormula\t\tPrice(In rupees)\tAmount(in packets)\n";
            cin.get();
            cin.get();
            system("cls");
            break;
        case 2:
            cout <<"\n\n\t\t\tHere is The List of Medicine\n\n";
            search_by_name();
            cout << "MedID\t\tMedicine Name\t\tManufacturer\t\tFormula\t\tPrice(In rupees)\tAmount(in packets)\n";
            cin.get();
            cin.get();
            system("cls");
            break;
        case 3:
            cout <<"\n\n\t\t\tHere is The List of Medicine\n\n";
            search_by_company();
            cout << "MedID\t\tMedicine Name\t\tManufacturer\t\tFormula\t\tPrice(In rupees)\tAmount(in packets)\n";
            cin.get();
            cin.get();
            system("cls");
            break;
        case 4:
            cout <<"\n\n\t\t\tHere is The List of Medicine\n\n";
            search_by_formula();
            cout << "MedID\t\tMedicine Name\t\tManufacturer\t\tFormula\t\tPrice(In rupees)\tAmount(in packets)\n";
            cin.get();
            cin.get();
            system("cls");
            break;
        case 5:
            quit = false;
            break;
        default:
            cout << "You Entered Wrong Value Press Enter To continue...";
            cin.get();
            cin.get();
            system("cls");
            break;
        }
    } while (quit);
    system("cls");
    cout << "Thanks For Using Medicine Search Panel...";
    cin.get();
}