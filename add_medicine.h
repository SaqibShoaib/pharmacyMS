#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
// #include "list_all_medicine.h"
// #include "medicine.h"
#include "tablet.h"
using namespace std;

void store_medicine_to_file()
{
    cout << "\n\tWelcome TO Medicine Addition Panel\n";
    int count;
    int c,p;
    cout <<"How many Number of medicine You want to add: ";
    cin >> count;
    string name, manufacturer,formula;
    tablet *medicine = new tablet[count];
    for (int  i = 0; i < count; i++)
    {
        cout <<"\n\t\tType The Data of "<<i+1<<" Here\n";
        cout <<"Type The Name of Medicine: ";
        cin >> name;
        cin.ignore();
        medicine[i].set_med_name(name);
        cout <<"Type The Manufacturer/Company Name Here:  ";
        cin >> manufacturer;
        cin.ignore();
        medicine[i].set_med_manfacturer(manufacturer);
        cout << "Type The Formula of Medicine Here: ";
        cin >>formula;
        cin.ignore();
        medicine[i].set_med_formula(formula);
        cout <<"Type The Price of Medicine in Rupees: ";
        cin >> p;
        medicine[i].setprice(p);
        
        cout <<"Type The Amount of Medicine in Packets: ";
        cin >> c;
        medicine[i].setcount(c);
        medicine[i].store_medicine();
    }
    char y ;
    cout <<"\nDo you want to check medicne you have added right now\n"
    <<"Type y/Y to see: ";
    cin >>y;
    if (y=='y' || y=='Y')
    {
    system("cls");
    cout <<"\n\t\tHere is The List of Medicine You Added";
    for (int j = 0; j < count; j++)
    {
        cout<<"\n\n\t\tData of "<<j+1<<" Medicine\n";
        medicine[j].displaytab();
    }
    }
    
}