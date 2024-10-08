#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;
class Game
{
	public:	
		string playerName;
		int cmp=0,per=0;
void displayMenu() 
{
	cout<<"\n\n "<<playerName<<" Score="<<per;
    cout<<"\n\nComputer_Score=0"<<cmp;
    cout << "\n\n===== Rock, Paper, Scissors Game =====" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}
void determineWinner(int playerChoice, int computerChoice, int &playerScore, int &computerScore) 
{
   	cout << "You chose: ";
    switch(playerChoice) 
	{
        case 1: cout << "Rock"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
    }
    cout << endl;
	cout << "Computer chose: ";
    switch(computerChoice) 
	{
        case 1: cout << "Rock"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
    }
    cout << endl;
	if (playerChoice == computerChoice) 
	{
        cout << "It's a tie!" << endl;
    } 
	else if 
			((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) 
			{
	    		cout << "You win this round!" << endl;
	    		playerScore++;
	    		per++;
		    } 
			else 
			{  
		        cout << "Computer wins this round!" << endl;
		        computerScore++;
		        cmp++;
		    }
}


void playGame() 
{
 	int rounds, playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;

   
    srand(time(0));

    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout<<"\n\n \t \t \t NAME \t \t";
	cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout << "\nEnter your name: ";
    getline(cin, playerName);
    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout<<"\n\n \t \t \t Round \t \t";
	cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
    cout <<playerName <<" How Many Round You Want To Play? : ";
    cin >> rounds;
    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout<<"\n\n \t \t \t GAME \t \t";
	cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	for (int i = 1; i <= rounds; ++i) 
	{
        cout << "This is Round " << i << endl;

    	
        displayMenu();

    
        cin >> playerChoice;

    
        if (playerChoice == 4) 
		{
            cout << "Thanks for playing!" << endl;
            break;
        }

    
        if (playerChoice < 1 || playerChoice > 4) 
		{
            cout << "Invalid choice! Please choose a number between 1 and 4." << endl;
            continue; 
        }

        
        computerChoice = (rand() % 3) + 1;

        
        determineWinner(playerChoice, computerChoice, playerScore, computerScore);

        cout << endl; 
    }


    cout << playerName << "'s Final Score: " << playerScore << endl;
    cout << "Computer's Final Score: " << computerScore << endl;

    if (playerScore > computerScore) 
	{
        cout << playerName << " wins the game!" << endl;
    } 
	else if (computerScore > playerScore) 
	{
        cout << "Computer wins the game!" << endl;
    }
	 
	else 
	
	{
        cout << "The game is a tie!" << endl;
    }
}

};
int main()
{
	Game g1;
	g1.playGame();
    //playGame();

    return 0;
}
