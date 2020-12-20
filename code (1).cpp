/*
 * code.cpp
 *
 *  Created on: Nov 28, 2020
 *      Author: 1749916_snhu
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float intitInv, monDep, AnuInt , months, years; //variables for program in float
	float totalAm, intAmt, yearTotInt;

// first Interface that takes input from customer
	cout << "*************************\n";
	cout << "****Data Input****\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";

		system("PAUSE");

	cout << "*************************\n";                                 /* takes input from user */
	cout << "****Data Input****\n";
	cout << "Initial Investment Amount:$\n";
	cin >> intitInv;

	cout << "Monthly Deposit:$";
	cin >> monDep;

	cout << "Annual Interest";
	cin >> AnuInt;

	cout << "Number of years: ";
	cin >> years;
	months = years * 12;

	system("PAUSE");

	totalAm = intitInv;
    		// second interface
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "=================================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "-----------------------------------------------------------------\n";

	for (int i = 0; i < years; i++){				//function that calculates balances without interest
		intAmt = (totalAm) * (AnuInt / 100);
		totalAm = totalAm + intAmt;

		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";
	}
	totalAm = intitInv;

	cout << "\n\nBalance an Interest With Additional Monthly Deposit\n";
	cout << "================================================================ \n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "----------------------------------------------------------------\n";


	for(int j = 0; j < 12; j++){ // Calculates end balances with interest
		intAmt = (totalAm + monDep) * ((AnuInt/100)/12);
		yearTotInt = yearTotInt + intAmt;
		totalAm = totalAm + monDep + intAmt;

	cout << (j + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";
	}
	return 0;   // end program
}




