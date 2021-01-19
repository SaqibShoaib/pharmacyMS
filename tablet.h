#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "medicine.h"
using namespace std;
class tablet : public add_medicine{
    protected:
    int count;
    int price;
    public:
    void setcount(int &c){
        while (c <= 0)
        {
            cout <<"You entered wrong Amount of medicine\n"
            <<"Kindly type again: ";
            cin >> c;
        }
        count = c;
    }
    void setprice(int &p){
        while (p <= 0)
        {
            cout <<"You entered wrong Price\n"
            <<"Kindly Type Again: ";
            cin >> p;
        }
        price = p;
    }
    int getcount(){
        return count;
    }
    int getprice(){
        return price;
    }
    void store_medicine(){
        set_serialNo();
        ofstream add;
        add.open("medicine_data.txt",ios :: app);
        add <<"\n"<<serial_no <<"\t\t"<<med_name<<"\t\t\t\t"<<med_manuf<<"\t"<<med_formula<<"\t"<<price<<"\t"<<count;
    }
    void displaytab(){
        cout << "\nMedicine Serial Number is: " << serial_no;
        cout << "\nMedicine Name is: " << med_name;
        cout << "\nMedicine Manufacturer Name is: " << med_manuf;
        cout << "\nMedicine Formula is: " << med_formula;
        cout <<"\nMedicine Price in Rupees is: "<<price; 
        cout <<"\nMedicine Amount in Packets is: "<<count; 

    }
};