#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "list_all_medicine.h"
#include "add_medicine.h"
#include "sub_menu.h"

int main()
{
	int menu;
	bool quit = true;
	do
	{
		cout << "\t\t\t Pharmacy Management System \n";
		cout << "\t\t==================================================\n\n";
		cout << "\t\t--------------------------------------------------\n";
		cout << "\t\t||\t1.Enter 1 to Add Medicines \t ||\n";
		cout << "\t\t||\t2.Enter 2 to Show All Medicines \t\t\t ||\n";
		cout << "\t\t||\t3.Enter 3 to Search Medicine\t\t\t ||\n";
		cout << "\t\t||\t3.Enter 0 to exit\t\t\t ||\n";
		cout << "\t\t--------------------------------------------------\n";
		cout << "\t\t==================================================\n\n";
		cout <<"Type Your Choice Here: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			store_medicine_to_file();
			cout <<"\nPress Enter to continue..";
			cin.get();
			cin.get();
			system("cls");
			break;
		case 2:
			display_all_medicine();
			cout <<"\nPress Enter to continue..";
			cin.get();
			cin.get();
			system("cls");
			break;
		case 3:
			sub_menu();
			cout <<"\nPress Enter to continue..";
			cin.get();
			cin.get();
			system("cls");
			break;
		case 4:
			quit = false;
			cout <<"\nPress Enter to continue..";
			cin.get();
			cin.get();
			system("cls");
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
    cout << "Thanks For Using Medicine Panel...";
    cin.get();
}
