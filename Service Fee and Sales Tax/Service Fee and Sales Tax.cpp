							/* Program to calculate Service Fee and Sales Tax of bill and Print a Totalbill  on screen
								example --> A restaurant charges 10% services fee And 16% sales tax
							*/
#include <iostream>
#include <cmath>
using namespace std;


int main()

{

	float bill;
	cout << "Enter a bill value ! " << endl;
	cin >> bill;

	float Total_bill = bill * 1.1;
	Total_bill = Total_bill * 1.16;

	cout << "Total bill is " << Total_bill << endl;


	return 0;

	//Created by @ilyes_Trabelsi
}

