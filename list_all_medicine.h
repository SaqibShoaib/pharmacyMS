#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void display_all_medicine(){
    cout << "\n\t\t\tHere is The List of All Medicine\n\n";
    ifstream display_med;
    display_med.open("medicine_data.txt", ios ::in);
    int serial_no,count,price;
    string d_med_name, d_manufacture, d_formula;
    // while (display_med.eof() == false)
    // {
        cout <<"MedID\t\tMedicine Name\t\tManufacturer\t\tFormula\t\tPrice(In rupees)\tAmount(in packets)\n";
    while (display_med.eof() == 0){
        display_med >> setw(10) >> serial_no >> setw(20) >> d_med_name >> setw(20) >> d_manufacture 
        >> setw(20) >> d_formula >> setw(10) >> price>> setw(10) >> count ;
        cout << serial_no<<"\t\t" <<d_med_name<<"\t\t\t" << d_manufacture<<"\t\t\t" <<d_formula<<"\t\t\t" <<price<<"\t\t" <<count<<endl;
    }
}