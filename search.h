#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void search_by_id()
{
    // creating variable to search
    int id_search;
    bool found = false;
    cout << "Type The ID of Medicine: ";
    cin >> id_search;
    ifstream search;
    search.open("medicine_data.txt", ios::in);
    int id, price, count;
    string name, companay, formula;
    while (search >> id >> name >> companay >> formula >> price >> count)
    {
        if (id_search == id)
        {   
            cout << id << "\t\t" << name << "\t\t\t" << companay << "\t\t\t" << formula << "\t\t\t" << price << "\t\t" << count << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "\t\tNo Record Founds\n";
    }
}
void search_by_name()
{
    // creating variable to search
    string name_search;
    bool found = false;
    cout << "Type The Name of Medicine: ";
    cin >> name_search;
    ifstream search;
    search.open("medicine_data.txt", ios::in);
    int id, price, count;
    string name, companay, formula;
    while (search >> id >> name >> companay >> formula >> price >> count)
    {
        if (name_search == name)
        {   
            cout << id << "\t\t" << name << "\t\t\t" << companay << "\t\t\t" << formula << "\t\t\t" << price << "\t\t" << count << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "\t\tNo Record Founds\n";
    }
}
void search_by_company()
{
    // creating variable to search
    string company_search;
    bool found = false;
    cout << "Type The Company of Medicine: ";
    cin >> company_search;
    ifstream search;
    search.open("medicine_data.txt", ios::in);
    int id, price, count;
    string name, company, formula;
    while (search >> id >> name >> company >> formula >> price >> count)
    {
        if (company_search == company){
            cout << id << "\t\t" << name << "\t\t\t" << company << "\t\t\t" << formula << "\t\t\t" << price << "\t\t" << count << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "\t\tNo Record Founds\n";
    }
}
void search_by_formula()
{
    // creating variable to search
    string formula_search;
    bool found = false;
    cout << "Type The Formula of Medicine: ";
    cin >> formula_search;
    ifstream search;
    search.open("medicine_data.txt", ios::in);
    int id, price, count;
    string name, company, formula;
    while (search >> id >> name >> company >> formula >> price >> count)
    {
        if (formula_search == formula){
            cout << id << "\t\t" << name << "\t\t\t" << company << "\t\t\t" << formula << "\t\t\t" << price << "\t\t" << count << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "\t\tNo Record Founds\n";
    }
}

    