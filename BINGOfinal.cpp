//this program will play bingo for two players

#include <iostream>
#include <iomanip>    //used to set width
#include <cstdlib>    //used for srand and rand
#include <ctime>      //used for time to generate random number
#include <algorithm>  //used for random shuffle
using namespace std;

//function prototypes
int getrandomNumber(int, int[]);                 //prototype of function getrandomNumber, this function will get a random number
void getplayerInputs(int (&board)[]);            //prototype of function getplayerInputs, this function will get each player's input values
void getboardLayout(int (&board)[]);             //prototype of function getboardLayout, this function will display the board for each player
void checkforMatch(int, int (&board)[]);         //prototype of function checkforMatch, this function will check if there is a match betwen the random number and a number on the board and mark as 0
bool checkforDuplicates(int, int[], const int);  //prototype of function checkforDuplicates, this function will check the player's input values for duplicates
bool checkforWinner(int[]);                      //prototype of function checkforWinner, this function will check the board if there is a winner

//Bingo class declaration
class Bingo
{
  private:
    int playerInput;

  public:
  
    //function to get each player's input values
    void getplayerInputs(int (&board)[25])
    {
      int playerInput;
      cout << "please enter 24 numbers between 10 and 40 with no duplicates. " << endl;
      for(int x=0; x<25; x++)
      {
        if(x==12)
        {
          board[x] = 0; //the 12th square is the middle of the card which is 0 by default
        }
        else
        {
          cin >> playerInput;
          if(checkforDuplicates(playerInput, board, 25) && playerInput>=10 && playerInput<=40)
          {
            board[x] = playerInput;
          }
          else
          {
            cout << "Either a duplicate value was entered or the value is not in between 10 and 40. " << endl;
            cout << "Please enter a valid number. " << endl;
            --x;
          }
        }
      }
    }

    //function to check the player's input values for duplicates
    bool checkforDuplicates(int playerInput, int checkValues[], const int size)
    {
      for(int x=0; x<size; x++)
        if(playerInput == checkValues[x])
          return false;
      return true;
    }

    //function to display the board for each player
    void getboardLayout(int (&board)[25])
    {
        int middle = 0;

        cout << endl << setw(3) << "B" << setw(6) << "I" << setw(6) << "N" << setw(6) << "G"<< setw(6) << "O" << endl;
        cout << setfill('_') << setw(6) << "|" << setw(6) << "|" << setw(6) << "|" << setw(6) << "|" << "_____" << setfill(' ') << endl;
        
        for (int x = 0; x < 24; x += 5)
        {
          
            cout << setw(6) << "|" << setw(6) << "|" << setw(6) << "|" << setw(6) << "|" << endl;
            cout << setw(3) << board[x] << setw(3) << "|" << setw(3) << board[x + 1] << setw(3) << "|" << setw(3) << board[x + 2] << setw(3) << "|" << setw(3) << board[x + 3] << setw(3) << "|" << setw(3) << board[x + 4] << endl;
            cout << setfill('_') << setw(6) << "|" << setw(6) << "|" << setw(6) << "|" << setw(6) << "|" << "_____" << setfill(' ') << endl;
        }
        cout << endl;
    }

    //function to get random number
    int getrandomNumber(int size, int numbers[])
    {
      int randomNumber = rand()%30 + 10;

      if(checkforDuplicates(randomNumber, numbers, 30))
      return randomNumber;
      
      return getrandomNumber(size, numbers);
    }

    //function to check if there is a match betwen the random number and a number on the board and mark as 0
    void checkforMatch(int randomNumber,int (&board)[25])
    {
      for (int x=0; x<25; x++)
      {
        if (board[x]==randomNumber)
        {
          board[x] = 0;
        }
      }
    }

    //function to check if there is a winner
    bool checkforWinner(int board[])
    {
      int index = 0;
      bool found = false;

      if (board[0] == 0 && board[1] == 0 && board[2] == 0 && board[3] == 0 && board[4] == 0)	    //there is a winner if the first row is all 0s
        return 1;
      if (board[5] == 0 && board[6] == 0 && board[7] == 0 && board[8] == 0 && board[9] == 0)	    //there is a winner if second row is all 0s
        return 1;
      if (board[10] == 0 && board[11] == 0 && board[12] == 0 && board[13] == 0 && board[14] == 0) //there is a winner if third row is all 0s
        return 1;
      if (board[15] == 0 && board[16] == 0 && board[17] == 0 && board[18] == 0 && board[19] == 0)	//there is a winner if forth row is all 0s
        return 1;
      if (board[20] == 0 && board[21] == 0 && board[22] == 0 && board[23] == 0 && board[24] == 0)	//there is a winner if fifth row is all 0s
        return 1;
      if (board[0] == 0 && board[6] == 0 && board[12] == 0 && board[18] == 0 && board[24] == 0)		//there is a winner if diagonal left top to bottom right is all 0s
        return 1;
      if (board[4] == 0 && board[8] == 0 && board[12] == 0 && board[16] == 0 && board[20] == 0)		//there is a winner if diagonal left bottom to top right is 0s
        return 1;
      if (board[0] == 0 && board[4] == 0 && board[20] == 0 && board[24] == 0)		                  //there is a winner if all four corner numbers are 0s
        return 1;
      if (board[0] == 0 && board[5] == 0 && board[10] == 0 && board[15] == 0 && board[20] == 0)		//there is a winner if first column is all 0s
        return 1;
      if (board[1] == 0 && board[6] == 0 && board[11] == 0 && board[16] == 0 && board[21] == 0)		//there is a winner if second column is all 0s
        return 1;
      if (board[2] == 0 && board[7] == 0 && board[12] == 0 && board[17] == 0 && board[22] == 0)		//there is a winner if third column is all 0s
        return 1;
      if (board[3] == 0 && board[8] == 0 && board[13] == 0 && board[18] == 0 && board[23] == 0)		//there is a winner if forth column is all 0s
        return 1;
      if (board[4] == 0 && board[9] == 0 && board[14] == 0 && board[19] == 0 && board[24] == 0)		//there is a winner if fifth column is all 0s
        return 1;
      return 0;
    }
};

int main()
{
  Bingo bingo;              //defined instance of the Bingo class
  
  srand((unsigned)time(0)); //get random values every time

  int player1, player2;     //local variables to hold for each player
  int square1[25];          //global declaration of array square1
  int square2[25];          //global declaration of array square2
  int numbersforGame[30];   //global declaration of array numbersforGame

  //call getplayerInputs to receive each player's 24 entries
  cout << "Player 1, ";
  bingo.getplayerInputs(square1);
  cout << "Player 2, ";
  bingo.getplayerInputs(square2);

  //call getboardLayout to display each player's board before the game
  cout << setw(22) << "Player 1 Board " << endl;
  bingo.getboardLayout(square1);
  cout << endl;
  cout << setw(22) << "Player 2 Board " << endl;
  bingo.getboardLayout(square2);

  //call getrandomNumber to generate random numbers for the game
  for(int x=0; x<30; x++)
  {
    int randomNumber;
    
    randomNumber = bingo.getrandomNumber(x, numbersforGame);
    numbersforGame[x] = randomNumber;
    bingo.checkforMatch(randomNumber, square1);
    bingo.checkforMatch(randomNumber, square2);

    //if square1 or player1 wins
    if(bingo.checkforWinner(square1))
    {
      player1 = true;
    }

    //if square2 or player2 wins
    if(bingo.checkforWinner(square2))
    {
      player2 = true;
      break;
    }
  }

  //display the winner or winners
  if(player1==true && player2==true)
    cout << endl << setw(24) << "Both Players Win! " << endl << endl;
  else
  {
    if(player1==true)
      cout << endl << setw(22) << "Player 1 Wins! " << endl << endl;
    else
      cout << endl << setw(22) << "Player 2 Wins! " << endl << endl;
  }

  //call getboardLayout to display each player's board after the game
  cout << setw(22) << "Player 1 Board " << endl;
  cout << setw(21) << "(Post Game) " << endl;
  bingo.getboardLayout(square1);
  cout << setw(22) << "Player 2 Board " << endl;
  cout << setw(21) << "(Post Game) " << endl;
  bingo.getboardLayout(square2);

  system("PAUSE");
  return 0;
}