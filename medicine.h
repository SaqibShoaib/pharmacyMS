#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;
class add_medicine
{
protected:
    int serial_no;
    string med_name;
    string med_manuf;
    string med_formula;

public:
    add_medicine()
    {
        serial_no = 0;
        med_name = " ";
        med_manuf = " ";
        med_formula = " ";
    }
    void set_serialNo()
    {
        ifstream display_med("medicine_data.txt", ios ::in);
        int srno,pr,co;
        string d_med_name, d_manufacture, d_formula;
        while (display_med.eof() == 0)
        {
            display_med >> setw(10) >> srno >> setw(20) >> d_med_name >> setw(20) >> d_manufacture >> setw(20) >> d_formula
             >> setw(10) >>pr >>setw(10) >>co;
        }
        srno++;
        serial_no = srno;
    }
    void set_med_name(string &name)
    {
        // while (name.size()==0)
        // {
        //     cout <<"You Entered Wrong Name of Medicine\n"
        //     <<"Kindly add Name Again: ";
        //     getline(cin,name);
        // }
        med_name = name;
    }
    void set_med_manfacturer(string &manfacturer)
    {
        // while (manfacturer.size()==0)
        // {
        //     cout <<"You Entered Wrong Name of Company\n"
        //     <<"Kindly add Name Again: ";
        //     getline(cin,manfacturer);
        // }
        med_manuf = manfacturer;
    }
    void set_med_formula(string &formula)
    {
        // while (formula.size()==0)
        // {
        //     cout <<"You Entered Wrong Formula of Medicine\n"
        //     <<"Kindly add Formula Again: ";
        //     getline(cin,formula);
        // }
        med_formula = formula;
    }
    virtual void display()
    {
        cout << "\nMedicine Serial Number is: " << serial_no;
        cout << "\nMedicine Name is: " << med_name;
        cout << "\nMedicine Manufacturer Name is: " << med_manuf;
        cout << "\nMedicine Formula is: " << med_formula;
    }
    int getSerial_no()
    {
        return serial_no;
    }
    string get_med_name()
    {
        return med_name;
    }
    string get_med_manfucturer()
    {
        return med_manuf;
    }
    string get_med_formula()
    {
        return med_formula;
    }
    void add_medicine_to_file()
    {
        set_serialNo();
        ofstream add;
        add.open("medicine_data.txt", ios ::app);
        add << "\n"
            << serial_no << "\t\t" << med_name << "\t\t\t\t" << med_manuf << "\t" << med_formula;
    }
};