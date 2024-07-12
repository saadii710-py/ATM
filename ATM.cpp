#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
float Bank_balance = 90000.0, tax_slip = 2.5;
//Tax Slip function
float receipt()
{
	char slp;
	cout << "Do you want to Print Slip?" << endl;
	cout << "Extra 2.5Rs will be charged for Slip" << endl;
	cout << "Press 'y' OR 'Y' for Slip OR Press any key to continue procedure" << endl;
	cin >> slp;
	//for slip
	if (slp == 'y' || slp == 'Y')
	{
		return(Bank_balance = Bank_balance - tax_slip);
	}
	else
	{
		return(Bank_balance);
	}
}
//Account No Checking in Fund Transfer
void account_vr()
{
	string tr_account;
	do {
		cout << "Enter 16-digit Account No. in which you want to transfer money = ";
		cin >> tr_account;
		if (tr_account.size() == 16)
		{
			cout << "Please wait while we access this account........." << endl;
		}
		else
		{
			cout << "Invalid Account No." << endl;
			cout << "Enter Account No. again" << endl;
		}
	} while (tr_account.size() != 16);
}
//Balance Checking
int balance_check(int amount)
{
	do {
		if (amount >= (Bank_balance - 1000))
		{
			cout << "Error! Minimum Rs.1000 must be avaiable in your account OR The amount you enter is more than the actual amount in your account" << endl;
			cout << "Enter amount again" << endl;
			cin >> amount;
		}
	} while (amount >= (Bank_balance - 1000));
	return(amount);

}
//Balance Inquiry
float balanceInquiry()
{
	cout << "Please Wait... While your Account Balance is under inquiry" << endl;
	cout << "Extra 2.5Rs will be charged for the slip" << endl;
	Bank_balance = Bank_balance - tax_slip;
	return (Bank_balance);
}
//Reference No for Utility Bills
void referenceNo()
{
	string tr_reference;
	do {
		cout << "Enter 14 digit Reference No. written on your bill = ";
		cin >> tr_reference;
		if (tr_reference.size() == 14)
		{
			cout << "Please wait while we are Processing your Bill........." << endl;
		}
		else
		{
			cout << "Invalid Reference No." << endl;
			cout << "Enter 14-digit Reference No. again" << endl;
		}
	} while (tr_reference.size() != 14);
}
//Consumer No for 1 Bill Invoice
void consumerNo()
{
	string tr_consumer;
	do {
		cout << "Enter 17 digit Consumer No. written on your bill = ";
		cin >> tr_consumer;
		if (tr_consumer.size() == 17)
		{
			cout << "Please wait while we are Processing your Bill........." << endl;
		}
		else
		{
			cout << "Invalid Consumer No." << endl;
			cout << "Enter 17-digit Consumer No. again" << endl;
		}
	} while (tr_consumer.size() != 17);
}

/*-------------------------------------------------------------------------------------------------
										Current Account Functions
---------------------------------------------------------------------------------------------------*/

//Widthdraw Function
float c_withdrawAmount(int withdraw)
{
	float balance, tax;
	cout << "0.6% tax will be deducted from your account balance" << endl;
	tax = (0.6 / 100) * withdraw;
	balance = receipt() - withdraw - tax;
	return(balance);
}
//Fund Transfer in Dollars
float c_dollarFundTransfer(float dollar_fund)
{
	float rem_balance, dollar = 211.2, tax;
	cout << "0.8% tax will be deducted from your account balance" << endl;
	tax = (0.8 / 100) * dollar_fund;
	dollar = dollar_fund / dollar;
	rem_balance = receipt() - dollar_fund - tax;
	cout << "After conversion from Rs to Dollars, you transfer " << dollar << "$" << endl;
	return (rem_balance);
}
//Fund Transfer in Euros
float c_euroFundTransfer(float euro_fund)
{
	float rem_balance, euro = 222.66, tax;
	cout << "0.8% tax will be deducted from your account balance" << endl;
	tax = (0.8 / 100) * euro_fund;
	euro = euro_fund / euro;
	rem_balance = receipt() - euro_fund - tax;
	cout << "After conversion from Rs to Euros, you transfer " << euro << "€" << endl;
	return (rem_balance);
}
//Fund Transfer in Pounds
float c_poundFundTransfer(float pound_fund)
{
	float rem_balance, pound = 258.92, tax;
	cout << "0.8% tax will be deducted from your account balance" << endl;
	tax = (0.8 / 100) * pound_fund;
	pound = pound_fund / pound;
	rem_balance = receipt() - pound_fund - tax;
	cout << "After conversion from Rs to Pounds, you transfer " << pound << "£" << endl;
	return (rem_balance);
}
//Fund Transfer in Same Bank
float c_sameLocalTransfer(float rs_same)
{
	float balance, tax;
	cout << "0.2% tax will be deducted from your account balance" << endl;
	tax = (0.2 / 100) * rs_same;
	balance = receipt() - rs_same - tax;
	return (balance);
}
//Fund Transfer in Other Banks
float c_diffLocalTransfer(float rs_diff)
{
	float balance, tax;
	cout << "0.6% tax will be deducted from your account balance" << endl;
	tax = (0.6 / 100) * rs_diff;
	rs_diff = tax + rs_diff;
	balance = receipt() - rs_diff;
	return (balance);
}
//Bill of Electricity and Gas
float c_utilityBill(float bill)
{
	float balance, tax;
	cout << "2.5% tax will be deducted from your account balance" << endl;
	tax = (2.5 / 100) * bill;
	balance = receipt() - bill - tax;
	return (balance);
}
//Bill of 1 Bill Invoice
float c_oneBill(float bill)
{
	float balance, tax;
	cout << "5% tax will be deducted from your account balance" << endl;
	tax = (5 / 100) * bill;
	balance = receipt() - bill - tax;
	return (balance);
}

/*-------------------------------------------------------------------------------------------------
										Saving Account Functions
---------------------------------------------------------------------------------------------------*/

//Widthdraw Function
float withdrawAmount(int withdraw)
{
	float balance;
	balance = receipt() - withdraw;
	return(balance);
}
//Fund Transfer in Dollars
float dollarFundTransfer(float dollar_fund)
{
	float rem_balance, dollar = 211.2;
	dollar = dollar_fund / dollar;
	rem_balance = receipt() - dollar_fund;
	cout << "After conversion from Rs to Dollars, you transfer " << dollar << "$" << endl;
	return (rem_balance);
}
//Fund Transfer in Euros
float euroFundTransfer(float euro_fund)
{
	float rem_balance, euro = 222.66;
	euro = euro_fund / euro;
	rem_balance = receipt() - euro_fund;
	cout << "After conversion from Rs to Euros, you transfer " << euro << "€" << endl;
	return (rem_balance);
}
//Fund Transfer in Pounds
float poundFundTransfer(float pound_fund)
{
	float rem_balance, pound = 258.92;
	pound = pound_fund / pound;
	rem_balance = receipt() - pound_fund;
	cout << "After conversion from Rs to Pounds, you transfer " << pound << "£" << endl;
	return (rem_balance);
}
//Fund Transfer in Same Bank
float sameLocalTransfer(float rs_same)
{
	float balance;
	balance = receipt() - rs_same;
	return (balance);
}
//Fund Transfer in Other Banks
float diffLocalTransfer(float rs_diff)
{
	float balance, tax;
	cout << "0.3% tax will be deducted from your account balance" << endl;
	tax = (0.3 / 100) * rs_diff;
	rs_diff = tax + rs_diff;
	balance = receipt() - rs_diff;
	return (balance);
}
//Bill of Electricity and Gas
float utilityBill(float bill)
{
	float balance;
	balance = receipt() - bill;
	return (balance);
}
//Bill of 1 Bill Invoice
float oneBill(float bill)
{
	float balance;
	balance = receipt() - bill;
	return (balance);
}

int main()
{
	string card_no, pin, tf_account;
	int card, choice, menu, deposit, wd_menu, wd_amount, fund_menu, inter_fund, rs_dollar, rs_euro, rs_pound, rs_samelocal;
	int rs_difflocal, payment_menu, utility_menu, elec_bill, gas_bill, one_bill;
	char slip, ch;
	do
	{
		cout << "**********WELCOME TO ATM**********" << endl;
		do
		{
			cout << "Enter your Card and Press 1" << endl;
			cin >> card;
			if (card == 1)
			{
				do
				{
					cout << "Enter your 16-digit Card No.: ";
					cin >> card_no;
					cout << "Enter your 4-digit Pin: ";
					cin >> pin;
					if (card_no.size() == 16 && pin.size() == 4)
					{
						cout << "Press 1 for Current Account." << endl;
						cout << "Press 2 for Savings Account." << endl;
						cin >> choice;
						switch (choice)
						{

							//--------------------------------Current Account------------------------------------------------------//

						case 1:
						{
							cout << endl;
							cout << "Press (1) to Withdraw Cash" << endl;
							cout << "Press (2) for Balance Inquiry " << endl;
							cout << "Press (3) for Funds Transfer" << endl;
							cout << "Press (4) for Bill Payments" << endl;
							cin >> menu;
							switch (menu)
							{
							case 1:		//Withdraw Cash Case
							{
								cout << endl;
								cout << "Press (1) to Widthdraw 1,000 " << endl;
								cout << "Press (2) to Widthdraw 5,000 " << endl;
								cout << "Press (3) to Widthdraw 10,000 " << endl;
								cout << "Press (4) to Widthdraw Custom Amount" << endl;
								cin >> wd_menu;
								switch (wd_menu)
								{
									//Menu of Withdrawing the Cash
								case 1:
								{
									wd_amount = 1000;
									Bank_balance = c_withdrawAmount(wd_amount);
									cout << "Your Remaining Account Balance is = " << Bank_balance << endl;
									break;
								}
								case 2:
								{
									wd_amount = 5000;
									Bank_balance = c_withdrawAmount(wd_amount);
									cout << "Your Remaining Account Balance is = " << Bank_balance << endl;
									break;
								}
								case 3:
								{
									wd_amount = 10000;
									Bank_balance = c_withdrawAmount(wd_amount);
									cout << "Your Remaning Account Balance is = " << Bank_balance << endl;
									break;
								}
								case 4:
								{
									cout << "Enter Custom Amount to Widthdraw : " << endl;
									cin >> wd_amount;
									int amount = balance_check(wd_amount);
									Bank_balance = c_withdrawAmount(amount);
									cout << "Your Remaining Account Balance is = " << Bank_balance << endl;
									break;
								}
								}//Withdraw Menu Ending
								break;
							}
							//Withdraw Case 1 Ending
							case 2:		//Balance Inquiry Case
							{
								Bank_balance = balanceInquiry();
								cout << "Your Account Balance is = " << Bank_balance << endl;
								break;
							}
							//Balance Inquiry Case 2 Ending
							case 3:		//Funds Transfer Case
							{
								cout << endl;
								cout << "Press (1) for Foreign Fund Transfer (International Banks)" << endl;
								cout << "Press (2) for Local Fund Transfer (Same Local Bank)" << endl;
								cout << "Press (3) for Local Fund Transfer (Other Local Banks)" << endl;
								cin >> fund_menu;
								switch (fund_menu)
								{
								case 1:		//Foreign Fund Transfer Menu
								{
									cout << endl;
									cout << "In which Currency you want to Transfer Funds Internationally?!" << endl;
									cout << endl;
									cout << "Press (1) from Rs to Dollars ($)" << endl;
									cout << "Press (2) from Rs to Euros (€)" << endl;
									cout << "Press (3) from Rs to Pounds (£)" << endl;
									cin >> inter_fund;
									switch (inter_fund)
									{
									case 1:		//Dollar Fund Transfer
									{
										account_vr();
										cout << "Current Rate of 1 Dollar in Pakistan is \"Rs.210\"" << endl;
										cout << "Enter Rs amount you want to Transfer to Foreign Account in Dollars($)" << endl;
										cin >> rs_dollar;
										int amount = balance_check(rs_dollar);
										cout << "Your Remaining Account Balance after Transaction is = " << c_dollarFundTransfer(amount) << " Rs" << endl;
										break;
									}
									case 2:		//Euro Fund Transfer
									{
										account_vr();
										cout << "Current Rate of 1 Euro in Pakistan is \"Rs.222.6\"" << endl;
										cout << "Enter Rs amount you want to Transfer to Foreign in Euros(€)" << endl;
										cin >> rs_euro;
										int amount = balance_check(rs_euro);
										cout << "Your Remaining Account Balance after Transaction is = " << c_euroFundTransfer(amount) << " Rs" << endl;
										break;
									}
									case 3:		//Pound Fund Transfer
									{
										account_vr();
										cout << "Current Rate of 1 Pound in Pakistan is \"Rs.258.92\"" << endl;
										cout << "Enter Rs amount you want to Transfer to Foreign in Pounds(£)" << endl;
										cin >> rs_pound;
										int amount = balance_check(rs_pound);
										cout << "Your Remaining Account Balance after Transaction is = " << c_poundFundTransfer(amount) << " Rs" << endl;
										break;
									}
									}
									break;
								}//Foreign Fund Transfer Case 1 Ending
								case 2:		//Local Same Bank Fund Transfer
								{
									account_vr();
									cout << "Enter Rs amount you want to transfer to other account " << endl;
									cin >> rs_samelocal;
									int amount = balance_check(rs_samelocal);
									cout << "Your Remaining Account Balance after transaction is = " << c_sameLocalTransfer(amount) << endl;
									break;
								}//Local Same Bank Fund Transfer Case 2 Ending
								case 3:		//Local Diff Bank Fund Transfer
								{
									account_vr();
									cout << "Enter Rs amount you want to transfer to other account " << endl;
									cin >> rs_difflocal;
									int amount = balance_check(rs_difflocal);
									cout << "Your Remaining Account Balance after transaction is = " << c_diffLocalTransfer(amount) << endl;
									break;
								}//Local Diff Bank Fund Transfer Case 2 Ending
								}//Funds Transfer Menu Ending
								break;
							}
							//Funds Transfer Case 3 Ending
							case 4:		//Bill Payments Case
							{
								cout << endl;
								cout << "Press (1) for Utility Bills" << endl;
								cout << "Press (2) for 1 Bill Invoice" << endl;
								cin >> payment_menu;
								switch (payment_menu)
								{
								case 1:		//Utility Bills
								{
									cout << endl;
									cout << "Press (1) for Electricity Bill" << endl;
									cout << "Press (2) for Gas Bill" << endl;
									cin >> utility_menu;
									switch (utility_menu)
									{
									case 1:		//Electricity Bill
									{
										referenceNo();
										cout << "Enter your Bill Amount " << endl;
										cin >> elec_bill;
										int amount = balance_check(elec_bill);
										cout << "Your Remaining Account Balance after Bill Payment is = " << c_utilityBill(amount) << endl;
										break;
									}
									case 2:		//Gas Bill
									{
										referenceNo();
										cout << "Enter your Bill Amount " << endl;
										cin >> gas_bill;
										int amount = balance_check(gas_bill);
										cout << "Your Remaining Account Balance after Bill Payment is = " << c_utilityBill(amount) << endl;
										break;
									}
									}
									break;
								}
								case 2:		//1 Bill Invoice
								{
									consumerNo();
									cout << "Enter your Bill Amount" << endl;
									cin >> one_bill;
									int amount = balance_check(one_bill);
									cout << "Your Remaining Account balance after payment is = " << c_oneBill(amount) << endl;
									break;
								}
								}
								break;
							}
							//Bill Payments Case 4 Ending
							}
							//Current Account Menu Ending
							break;
						}

						//--------------------------------Saving Account------------------------------------------------------//

						case 2:
						{
							cout << endl;
							cout << "Press (1) to Withdraw cash" << endl;
							cout << "Press (2) for Balance Inquiry " << endl;
							cout << "Press (3) for Funds Transfer" << endl;
							cout << "Press (4) for Bill Payments" << endl;
							cin >> menu;
							switch (menu)
							{
							case 1:		//Withdraw Cash Case
							{
								cout << endl;
								cout << "Press (1) to Widthdraw 1,000 " << endl;
								cout << "Press (2) to Widthdraw 5,000 " << endl;
								cout << "Press (3) to Widthdraw 10,000 " << endl;
								cout << "Press (4) to Widthdraw Custom Amount" << endl;
								cin >> wd_menu;
								switch (wd_menu)
								{
									//Menu of withdrawing the cash
								case 1:
								{
									wd_amount = 1000;
									Bank_balance = withdrawAmount(wd_amount);
									cout << "Your Remaining Account Balance is = " << Bank_balance << endl;
									break;
								}
								case 2:
								{
									wd_amount = 5000;
									Bank_balance = withdrawAmount(wd_amount);
									cout << "Your Remaining Account Balance is = " << Bank_balance << endl;
									break;
								}
								case 3:
								{
									wd_amount = 10000;
									Bank_balance = withdrawAmount(wd_amount);
									cout << "Your Remaning Account Balance is = " << Bank_balance << endl;
									break;
								}
								case 4:
								{
									cout << "Enter Custom Amount to Widthdraw : " << endl;
									cin >> wd_amount;
									int amount = balance_check(wd_amount);
									Bank_balance = withdrawAmount(amount);
									cout << "Your Remaining Account Balance is = " << Bank_balance << endl;
									break;
								}
								}//Withdraw Menu Ending
								break;
							}
							//Withdraw Case 1 Ending
							case 2:		//Balance Inquiry Case
							{
								Bank_balance = balanceInquiry();
								cout << "Your Account Balance is = " << Bank_balance << endl;
								break;
							}
							//Balance Inquiry Case 2 Ending
							case 3:		//Funds Transfer Case
							{
								cout << endl;
								cout << "Press (1) for Foreign Fund Transfer (International Banks)" << endl;
								cout << "Press (2) for Local Fund Transfer (Same Local Bank)" << endl;
								cout << "Press (3) for Local Fund Transfer (Other Local Banks)" << endl;
								cin >> fund_menu;
								switch (fund_menu)
								{
								case 1:		//Foreign Fund Transfer
								{
									cout << endl;
									cout << "In which Currency you want to transfer funds internationally?!" << endl;
									cout << endl;
									cout << "Press (1) from Rs to Dollars ($)" << endl;
									cout << "Press (2) from Rs to Euros (€)" << endl;
									cout << "Press (3) from Rs to Pounds (£)" << endl;
									cin >> inter_fund;
									switch (inter_fund)
									{
									case 1:		//Dollar Fund Transfer
									{
										account_vr();
										cout << "Current rate of 1 Dollar in Pakistan is \"Rs.210\"" << endl;
										cout << "Enter Rs amount you want to transfer to foreign account in Dollars($)" << endl;
										cin >> rs_dollar;
										int amount = balance_check(rs_dollar);
										cout << "Your Remaining Account Balance after transaction is = " << dollarFundTransfer(amount) << " Rs" << endl;
										break;
									}
									case 2:		//Euro Fund Transfer
									{
										account_vr();
										cout << "Current rate of 1 Euro in Pakistan is \"Rs.222.6\"" << endl;
										cout << "Enter Rs amount you want to transfer to foreign in Euros(€)" << endl;
										cin >> rs_euro;
										int amount = balance_check(rs_euro);
										cout << "Your Remaining Account Balance after transaction is = " << euroFundTransfer(amount) << " Rs" << endl;
										break;
									}
									case 3:		//Pound Fund Transfer
									{
										account_vr();
										cout << "Current rate of 1 Pound in Pakistan is \"Rs.258.92\"" << endl;
										cout << "Enter Rs amount you want to transfer to foreign in Pounds(£)" << endl;
										cin >> rs_pound;
										int amount = balance_check(rs_pound);
										cout << "Your Remaining Account Balance after transaction is = " << poundFundTransfer(amount) << " Rs" << endl;
										break;
									}
									}//Foreign Fund Transfer Menu Ending
									break;
								}
								case 2:		//Local Same Bank Fund Transfer
								{
									account_vr();
									cout << "Enter Rs amount you want to transfer to other account " << endl;
									cin >> rs_samelocal;
									int amount = balance_check(rs_samelocal);
									cout << "Your Remaining Account Balance after transaction is = " << sameLocalTransfer(amount) << endl;
									break;
								}
								case 3:		//Local Diff Bank Fund Transfer
								{
									account_vr();
									cout << "Enter Rs amount you want to transfer to other account " << endl;
									cin >> rs_difflocal;
									int amount = balance_check(rs_difflocal);
									cout << "Your Remaining Account Balance after transaction is = " << diffLocalTransfer(amount) << endl;
									break;
								}
								}//Funds Transfer Menu Ending
								break;
							}
							//Funds Transfer Case 3 Ending
							case 4:		//Bill Payments Case
							{
								cout << endl;
								cout << "Press (1) for Utility Bills" << endl;
								cout << "Press (2) for 1 Bill Invoice" << endl;
								cin >> payment_menu;
								switch (payment_menu)
								{
								case 1:		//Utility Bills
								{
									cout << endl;
									cout << "Press (1) for Electricity Bill" << endl;
									cout << "Press (2) for Gas Bill" << endl;
									cin >> utility_menu;
									switch (utility_menu)
									{
									case 1:		//Electricity Bill
									{
										referenceNo();
										cout << "Enter your bill amount " << endl;
										cin >> elec_bill;
										int amount = balance_check(elec_bill);
										cout << "Your Remaining Account Balance after Bill Payment is = " << utilityBill(amount) << endl;
										break;
									}
									case 2:		//Gas Bill
									{
										referenceNo();
										cout << "Enter your bill amount " << endl;
										cin >> gas_bill;
										int amount = balance_check(gas_bill);
										cout << "Your Remaining Account Balance after Bill Payment is = " << utilityBill(amount) << endl;
										break;
									}
									}
									break;
								}//Utility Bills Menu Ending
								case 2:		//1 Bill Invoice
								{
									consumerNo();
									cout << "Enter your bill amount" << endl;
									cin >> one_bill;
									int amount = balance_check(one_bill);
									cout << "Your Remaining Account balance after payment is = " << oneBill(amount) << endl;
									break;
								}
								}//Bill Payment Menu Ending 
								break;
							}
							//Bill Payment Case 4 Ending
							}//Saving Account Menu Ending
						}
						}
					}
					else
					{
						cout << "Error! Invalid Card No. OR Pin Code..." << endl;
						cout << "Enter Card No. OR Pin Code again" << endl;
					}
				} while (card_no.size() != 16 || pin.size() != 4);
			}
			else
			{
				cout << "Error! Please Press '1' only" << endl << endl;
			}
		} while (card != 1);
		cout << "Do you want to use ATM again?!" << endl;
		cout << "Press 'y' OR 'Y' to use ATM again OR Press any key to exit ATM " << endl << endl;
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << "***** Hope you like our Services *****" << endl;
	cout << "*****   Thank you for visiting   *****" << endl;
}