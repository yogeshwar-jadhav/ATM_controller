#include <iostream>
#include<stdlib.h>

class Atm{
	//ALl public class which are used for the controller are declared below 
	
	public:
		std::string cardNO;
		std::string getPinNumber();
		std::string getCardNumber();
		//getter setter pair to fetch or set the balance of the respective user (private information) is declared below
		int getBalance();
		void setBalance(int);
		/*Below includes remainder process like pin verification, Checking/ Saving account selection, viewing balance,
		withdrawing and depositing cash*/
		bool pinNumVerify(std::string);
		int accountSelect();
		int balDepWitd();
		void process();
		
	private:
		// writing as an example for only 1 user
		/* If we are using the actual database system, we can have multiple user's information
		to fetch their private data like card information, pin number, setting and getting the
		balance information. */
		std::string cardNo = "123456789";
		std::string pinNumber = "1234";
		int balance = 20000;
};
