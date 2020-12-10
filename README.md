# ATM_controller

Please view the instruction to clone your project, build and run tests.

 ## This Project is written in C++

You can download this project or clone it on your system.

* You might need a C++ Compiler for your system. 
* I preferred building this project on Windows system with Dev C++ compiler.
The link to C++ compiler is given below:
https://sourceforge.net/projects/orwelldevcpp/files/latest/download

>>>> After downloading the compiler you can create a new project in it or clone the project in your system so that you can open the folder.
* Remember to create the project with console application.

>>>> Your project must contain following files in it.
* main.cpp
* atm.cpp
* Atm.h

>>>> Go to Execute >> and rebuild all (rebuilds the project and checks for any possible errors) >>  Next you can execute the project.

>>>> You will see terminal similar to below image:

![start_page_terminal](https://user-images.githubusercontent.com/64508477/101829657-56ab3900-3b01-11eb-91e6-86d7308ed9fa.jpg)

For keeping it simple I have added just one user's account information:
cardNo = "123456789"
pinNumber = "1234"
balance = 20000

* We can link database which has the information of multiple accounts in it from where we can fetch their private information.
* Using the account information you can move ahead and give correct input in the terminal.

### Account selection
1. Checking
2. Savings\
I do not have separate details for both Checking and Savings hence in either case it will look up to the same account information.
* Note that if you press any other input it will throw an error and ask you to press any key to start from swipe card page.

### Check Balance / Withdraw / Deposit

1. Balance
* If you hit 1 and enter it will show you the balance as per the image below:
![balance](https://user-images.githubusercontent.com/64508477/101832711-de934200-3b05-11eb-964d-2633370d6f79.jpg)
* It won't accept the negative integer

2. Deposit
* If you hit 2 and enter it will ask to enter amount in place of inserting cash so that we give "x" amount and it will get added to the current balance and show you the updated balance further.
![deposit](https://user-images.githubusercontent.com/64508477/101832995-582b3000-3b06-11eb-99bd-954073b00d04.jpg)
* It won't accept the negative value and letters as input
* It does not have a limit to add amount to your acccount

3. Withdraw
* If you hit 3 and enter it will ask you to enter amount and further it will show updated accound balance according to the amount asked to be withdrawn.
* It won't accept the negative value and letters as input
* you can't withdraw more the balance you have in your account otherwise it will thrown an error and ask you to return to the swipe card page again.

