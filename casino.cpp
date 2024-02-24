#include <iostream>

#include <cstdlib>

#include <ctime>

#include <string>

#include <stdlib.h>

using namespace std;

string playerName;

double money;

void info();

void rules();

void switchStatementsCalculations (int &slot1, int &slot2, int &slot3, string cherries, string

                                   oranges, string plums, string bells, string melons, string bars);



void calculateAmountEarnedByPlaying (double &money, int slot1, int slot2, int slot3,

                                     double &total);

int main()

{   int slot1;

    int slot2;

    int slot3;

    double total=0;

    double amountOfMoneyEnterd=0;

    int count;



    string cherries = "cherries";

    string oranges = "oranges";

    string plums = "plums";

    string bells = "bells";

    string melons = "melons";

    string bars = "bars";

    string doAgain;

    srand ((unsigned)time(NULL));

    do

    {   info();

        slot1=rand()%6+1;

        slot2=rand()%6+1;

        slot3=rand()%6+1;



        switchStatementsCalculations(slot1, slot2, slot3, cherries, oranges, plums, bells, melons, bars);



        calculateAmountEarnedByPlaying(money, slot1, slot2, slot3, total);



        amountOfMoneyEnterd=(amountOfMoneyEnterd+money);

        cout << "Would you like to play again? Please type yes if so." << endl;

        cin >> doAgain;

        if(doAgain!= "yes")

        {

            cout << "The total amount of money you put in the slot machine is " << amountOfMoneyEnterd << endl;

            cout << "The total amount of money you won is $" << total << endl;

        }

    }

    while(doAgain=="yes");

    return 0;

}

void info()

{

    cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";

    rules();

    cout << "\n\nWhat's your Name : ";

    getline(cin, playerName);

    cout <<playerName<< " ,we are going to be playing a slot machine game today." << endl;

    cout << "\n\nEnter the starting balance in the machine : $";

    cout << " We will pull the lever for you :)" << endl;

    cin >> money;

    cout << "You put in $" << money << endl;

}

void rules()

   {   cout << "\t\t$$$$$$$$$$$$  CASINO NUMBER GUESSING RULES!$$$$$$$$$$$$\n";

       cout << "\t1.We enter the amout \n";

       cout << "\t2. Winner gets 2X times of the money bet if 2 slots match\n";

       cout << "\t2. Winner gets 3X times of the money bet if all 3 slots match\n";

       cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";

   }

void switchStatementsCalculations(int &slot1, int &slot2, int &slot3, string cherries, string

                                  oranges, string plums, string bells, string melons, string bars)

{switch (slot1)

    {

    case 1:

        cout << "You got " << cherries << endl;

    case 2:

        cout << "You got " << oranges << endl;

        break;

    case 3:

        cout << "You got " << plums << endl;

        break;

    case 4:

        cout << "You got " << bells << endl;

        break;

    case 5:

        cout << "You got " << melons << endl;

        break;

    case 6:

        cout << "You got " << bars << endl;

    }



    switch (slot2)

    {

    case 1:

        cout << "You got " << cherries << endl;

        break;

    case 2:

        cout << "You got " << oranges << endl;

        break;

    case 3:

        cout << "You got " << plums << endl;

        break;

    case 4:

        cout << "You got " << bells << endl;

        break;

    case 5:

        cout << "You got " << melons << endl;

        break;

    case 6:

        cout << "You got " << bars << endl;



    }



    switch (slot3)

    {

    case 1:

        cout << "You got " << cherries << endl;

        break;

    case 2:

        cout << "You got " << oranges << endl;

        break;

    case 3:

        cout << "You got " << plums << endl;

        break;

    case 4:

        cout << "You got " << bells << endl;

        break;

    case 5:

        cout << "You got " << melons << endl;

        break;

    case 6:

        cout << "You got " << bars << endl;



    }

}



void calculateAmountEarnedByPlaying(double &money, int slot1, int slot2, int slot3, double &total)



{

    double won=0;



    if(slot1==slot2 || slot1==slot3 || slot2==slot3)

    {

        cout << "Congratulations! You won." << endl;

        won=(money * 2);

        cout << "You won " << won << endl;

    }



    else if ((slot1==slot2 && slot1==slot3) || (slot2==slot1 && slot2==slot3) || (slot3==slot1 && slot3==slot2))

    {

        cout << "Congratulations! You won." << endl;

        won=(money*3);

        cout << "You won " << won << endl;

    }

    else

    {

        cout << "You didn't earn any money." << endl;

    }



    total=(total+won);

}


