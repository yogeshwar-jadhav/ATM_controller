#include "Atm.h"

//Give card number inplace of swiping or inserting the card in ATM machine
std::string Atm::getCardNumber(){
	return cardNo;
}
//Give pin number 
std::string Atm::getPinNumber(){
	return pinNumber;
}
//fetch balance information of respective user
int Atm::getBalance(){
	return balance;
}
//set balance according the one of the process (Withdrawal or Deposit)
void Atm::setBalance(int amt){
	balance = amt;
}
//Verifying user's pin according to our database information
bool Atm::pinNumVerify(std::string pinNumber){
	std::string pin = getPinNumber();
	if (pin == pinNumber){
		return true;
	}
	return false;
}
//Account selection (savings or checking)
//To keep it simple for now I have kept savings and checking account information same
//We can have both accounts as seperate and have their information separately in future
int Atm::accountSelect(){
	int accountType;
	std::cout << "select account type\n";
	std::cout << "1.checking\n";
	std::cout << "2.savings\n";
	std::cin >> accountType;
	return accountType;
}
//Selection of one of the operation a user want to do like to view balance, withdraw or deposit cash
int Atm::balDepWitd(){
	int action;
	std::cout << "1.Balance\n";
	std::cout << "2.Deposit\n";
	std::cout << "3.Withdraw\n";
	//std::cout << "4. Cancel Transaction"; 
	//I thought of using cancel transaction 
	std::cin >> action;
	return action;
}
void Atm::process(){
	char clear[] = "cls"; // for windows "cls" and for mac or linux "clear"
	 	//A while loop which runs infinitely same as an actual ATM machine following all the process stated below
		 while(true){
		std::cout << "Swipe Card\n";
		std::cin >> Atm::cardNO;
		system(clear);
		if (Atm::cardNO == Atm::getCardNumber()){
			std::string pinNO;
			std::cout << "enter pin \n";
			std::cin >> pinNO;
			system(clear);
			if(Atm::pinNumVerify(pinNO)){
				int selection = Atm::accountSelect();
				// not checking for account type here but if u want to add it can be done here
				switch (selection){
					//case 1 or case 2 : it will look at only user's information as per delcared in Atm.h file
					//We can chance it accordingly in future
					case 1:
					case 2:	system(clear); //clears the screen and goes to next step
							int action ;
							action = Atm::balDepWitd();
							switch (action){
								// Balance
								case 1 : 	system(clear);
											std::cout << "current Balance: " << Atm::getBalance()<< std::endl;
											system("pause");// pause the screen and wait until a specific or any key is pressed
											break;
								// Deposit
								case 2 :	std::cout << "Plase insert Cash\n";
											system(clear);
											// as we cannot physically deposit we enter amount here.
											std::cout << "Enter Amount: ";
											int amtD;
											std::cin >> amtD;
											int newAmtD;
											newAmtD = Atm::getBalance() + amtD;
											Atm::setBalance(newAmtD);
											std::cout << "Your Current Balance :  ";
											std::cout << Atm::getBalance()  << std::endl;
											system("pause");	
											break;
								// Withdraw
								case 3 :	std::cout << "Enter Amount: ";
											int amt;
											std::cin >> amt;
											int newAmt;
											newAmt  = Atm::getBalance() - amt;
											if(newAmt >= 0){
												Atm::setBalance(newAmt);
												std::cout << "Your Current Balance:  ";
												std::cout << Atm::getBalance() << std::endl; 
												system("pause");
											}
											else{
												std::cout << "insufficient funds\n";
											    system("pause");
											}
											break;
											//if the input is invalid
								default : 	system(clear);
											
											std::cout << "Invalid Option Entered."<< std::endl << "Your transaction has been cancelled."<< std::endl << "Thank You!" << std::endl;
											system("pause");
							}
							break;
							//if the input is invalid
					default: 	system(clear);
								std::cout << "Invalid Option Entered."<< std::endl << "Your transaction has been cancelled."<< std::endl << "Thank You!" << std::endl;
								system("pause");
				}
				
	
			}
			//if the pin in incorrect
			else{
				std::cout << "invalid pin\n";
				system("pause"); //wait until any key pressed to return to swipe card screen
			}
		}
		//if the card information is invalid 
		else{
				std::cout << "invalid Card\n";
				system("pause"); //wait until any key pressed to return to swipe card screen
			}
		system(clear);
	}
}
