#include <iostream>
using namespace std;
int main()
{

	// Project: Simple ATM using Procedural Programming in C++
	// Author: Amir Moavia
	// Features: PIN verification, deposit, withdraw, multiple transactions, and login attempts

	int pin = 1234;

	int pin_enter, Balance = 3000, Deposit_Money, Withdraw_Money;
	char repeat;
	cout << "------Welcome to the ATM------- \n";

	int attempts = 0;
	bool access_granted = false;

	while (attempts < 3)
	{
		cout << "Enter your four digit pin : ";

		cin >> pin_enter;

		if (pin_enter == pin)
		{

			access_granted = true;
			break;
		}
		else
		{
			cout << "Incorrect PIN. Try again\n";
			attempts++;
		}
	}
	if (access_granted)
	{

		do
		{
			int user_choice;
			cout << "------  ATM   MENU  ------\n";
			cout << "1. Check Balance \n";
			cout << "2. Deposit Money \n";
			cout << "3. Withdraw Money \n";
			cout << "4. Exit\n";

			cout << "Enter your choice : ";
			cin >> user_choice;

			switch (user_choice)
			{

			case 1:

				cout << "\n Your Current Balance is : " << Balance;
				break;

			case 2:
				cout << "\n Enter  amount to deposit : ";
				cin >> Deposit_Money;

				cout << "\nAmount deposited successfully ......\n";

				Balance += Deposit_Money;

				cout << "\n Current Balance Is : " << Balance;

				cout << endl;
				cout << endl;

				break;

			case 3:
				cout << "Enter amount to withdraw : ";
				cin >> Withdraw_Money;

				cout << endl;
				cout << "\n";
				cout << "Withdrawal successful .....\n";

				cout << "\n";
				Balance -= Withdraw_Money;

				cout << "your current balence is : " << Balance;
				break;
			case 4:

				cout << "\nExiting the system. Goodbye!\n";
				exit(0);
				break;
			}

			cout << "\nDo you want to perform another transaction? (Y/N): ";
			cin >> repeat;
			if (repeat == 'N' || repeat == 'n')
			{
				cout << endl;
				cout << "\nHave a great day Be happy ";
			}

		}

		while (repeat == 'Y' || repeat == 'y');
	}

	if (!access_granted)
	{
		cout << "\nToo many failed attempts tyy again later.\n";
	}

	return 0;
}
