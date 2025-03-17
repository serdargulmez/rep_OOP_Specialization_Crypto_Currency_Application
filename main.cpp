
#include <iostream>
using namespace std;

void printMenu()
{
    cout << "1: Print help" << endl;
    cout << "2: Print exchange stats" << endl;
    cout << "3: Place an ask" << endl;
    cout << "4: Place a bid" << endl;
    cout << "5: Print wallet" << endl;
    cout << "6: Continue" << endl;
}

int getUSerOption()
{
    int userOption;

    cout << "Type in 1-6" << endl;
    cin >> userOption;
    return userOption;
}

void printHelp()
{
    cout << "Selected option is 'Help'" << endl;
}

void printStats()
{
    cout << "Selected option is 'Stats'" << endl;
}

void printAsk()
{
    cout << "Selected option is 'Ask'" << endl;
}

void printBid()
{
    cout << "Selected option is 'Bid'" << endl;
}

void printWallet()
{
    cout << "Selected option is 'Wallet'" << endl;
}

void continueProgram()
{
    cout << "Selected option is 'Continue'" << endl;
}

void printInvalidOption()
{
    cout << "Selected option is 'Invalid'" << endl;
}

void processUserOption(int userOption)
{
    cout << "-------------------------------------------------------" << endl;
    if (userOption==1)
    {
        printHelp();
    }
    else if(userOption==2)
    {
        printStats();
    }
    else if(userOption==3)
    {
        printAsk();
    }
    else if(userOption==4)
    {
        printBid();
    }
    else if(userOption==5)
    {
        printWallet();
    }
    else if(userOption==6)
    {
        continueProgram();
    }
    else
    {
        printInvalidOption();
    }
    cout << "-------------------------------------------------------" << endl;
}

int main()
{
    cout << "--- Program is started!!! ---" << endl;
    
    while(true)
    {
        
        printMenu();
        int userOption = getUSerOption();
        processUserOption(userOption);

    }

    return 0;
}